#!/bin/bash

# Date: 2018-01-09
#
# Description:
# This snippet of script will combine the first page of all PDF files present in
# current directory/sub-directories.
# Output file will be: $OUTPUT_FILE_NAME.
# 
# Usage: sh merge_all_pdfs_first_page.sh
#
# Prerequisit: pdftk should be installed.
#
# Reference: https://www.pdflabs.com/docs/pdftk-man-page/

OUTPUT_FILE_NAME=final.pdf

\rm $OUTPUT_FILE_NAME 2>/dev/null 

for s in `find . -name "*.pdf"`
do 
  pdftk $s cat 1-1 output $s"_pdftk"
  echo -n "."
done

# Cleanup
pdftk `find . -name "*_pdftk"` cat output $OUTPUT_FILE_NAME
\rm `find . -name "*_pdftk"` 2> /dev/null

echo "\nCombined pdf with first pages: $OUTPUT_FILE_NAME"
