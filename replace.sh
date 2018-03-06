#!/bin/bash

# Script to replace strings.
# Execute script as: ./replace.sh old_strings_file.txt new_strings_file.txt

if [ 2 != $# ]
then 
	echo "Incorrect number of arguments format !!"
	echo "Usage : ./replace.sh <File name having old strings> <File name having corresponding new strings>"
	exit 1
fi 

find . -name *.[ch] > all_souce_files.txt

for current_file in  `cat all_souce_files.txt`
do 
	str_index=0
	for current_old_string in `cat $1`
	do 
		str_index=$(($str_index + 1))	
		echo -n "."
		current_new_string=`cat $2 | head -$str_index | tail -1`
		sed -i "s/\<$current_old_string\>/$current_new_string/g" $current_file
	done
	
done 
echo ""

rm -rf all_souce_files.txt 2>/dev/null
