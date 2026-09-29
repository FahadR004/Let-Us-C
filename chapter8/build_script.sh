#!/bin/bash


DIR_NAME=$(dirname -- $0)
SRC_DIR="$DIR_NAME"/src
BIN_DIR="$DIR_NAME"/bin

if [[ ! -d $SRC_DIR || ! -d $BIN_DIR ]]; then
	echo "Missing src or bin directories"
	exit 1
fi

C_FILES=$(ls "$SRC_DIR/"*.c)

for file in $C_FILES; do
	output_file="${BIN_DIR}/"$(basename "$file" .c)
	gcc "${file}" -o $output_file -lm
	if [ $? -ne 0 ]; then
		echo "Compilation failed for $file!"	
	fi
done

echo "Compiled and created executables for all C files in the bin directory"
		
