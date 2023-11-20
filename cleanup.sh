#!/bin/bash

array=('*.o' '*.lst' '*.map' '*.gb' '*.ihx' '*.sym' '*.cdb' '*.adb' '*.asm' '*.noi')

echo "clean up all the itermediate files in all dirs..."

for glob in "${array[@]}"
do
    find . -type f -name "$glob" -not -path "./gbdk/*" -print -delete
done

echo "DONE."