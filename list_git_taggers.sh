#!/bin/bash

LAST_N_TAGS=25
for tag in `git tag | sort -r | head -"$LAST_N_TAGS"`
do
    tag_name=`git cat-file tag $tag 2> /dev/null | head -3 | tail -1`
    if [ "$tag_name" ]; then
        tagger=`git cat-file tag $tag 2> /dev/null | head -4 | tail -1`
        echo "$tag_name -> $tagger"
    fi
done
