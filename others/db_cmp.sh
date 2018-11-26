#!/bin/bash

# Compares two sqlite3 database files.

if [ 2 != $# ]
then 
	echo "Incorrect number of arguments format !!"
	echo "Usage : ./db_cmp.sh.sh <Path of backup_database> <Path of new database>"
	exit 1
fi 

tables_1=`sqlite3 -line $1 ".table"`
rm -rf .1.dump 2> /dev/null
for current_table_1 in $tables_1
do
	echo "                          Table Name :::::: $current_table_1" >> .1.dump
	echo "" >> .1.dump
	sqlite3 -line $1 "select * from $current_table_1" >> .1.dump
done

tables_2=`sqlite3 -line $2 ".table"`
rm -rf .2.dump 2> /dev/null
for current_table_2 in $tables_1
do
        echo "                          Table Name :::::: $current_table_2" >> .2.dump
        echo "" >> .2.dump
        sqlite3 -line $2 "select * from $current_table_2" >> .2.dump
done

rm -rf db.diff 2> /dev/null
diff -b .1.dump .2.dump > diff.txt  
sdiff -b .1.dump .2.dump > sdiff.txt  
echo "Please refer diff.txt to view the difference in 2 DB's !!"
echo "And for detailed diff...please refer sdiff.txt !!"
