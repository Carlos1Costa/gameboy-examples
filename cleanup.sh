#!/bin/bash

echo "clean up all the itermediate files in all dirs..."
find . -name "*.o *.lst *.map *.gb *.ihx *.sym *.cdb *.adb *.asm *.noi" -exec rm -f --verbose {} \;
echo "DONE."
