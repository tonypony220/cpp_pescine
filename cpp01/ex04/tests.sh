#!/bin/sh
echo "\t\tTESTING BAD ARGS"
./out
./out 123
./out file 2 
./out file 2 dd dwd
echo " "
echo "\t\tTESTING EMPTY STRING"
./out file '' d
./out file dlll ''
./out file '' ''
echo " "
echo "\t\tTESTING BAD FILE"
./out filef the OOOOOOO
echo " "
echo "\t\tTESTING OK"
./out file the OOOO
grep --color=always 'the' file
echo " "
grep --color=always 'OOOO' file.replace
