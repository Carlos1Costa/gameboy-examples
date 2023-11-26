#!/bin/bash

array=('*.o' '*.lst' '*.map' '*.gb' '*.ihx' '*.sym' '*.cdb' '*.adb' '*.asm' '*.noi')

echo "\nclean up all the itermediate files in all dirs...\n"

for glob in "${array[@]}"
do
    find . -type f -name "$glob" -not -path "./gbdk/*" -print -delete
done

echo "\nDONE.\n"
