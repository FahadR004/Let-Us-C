#!/bin/bash

DIR_NAME=$(dirname -- $0)
SRC_DIR="$DIR_NAME"/src
BIN_DIR="$DIR_NAME"/bin
INCLUDE_DIR="$DIR_NAME"/include
SRC_OBJ_DIR="$SRC_DIR"/obj
UD_DIR="$DIR_NAME"/api
UD_OBJ_DIR="$UD_DIR"/obj

if [[ ! -d $BIN_DIR || ! -d $INCLUDE_DIR || ! -d $SRC_OBJ_DIR || ! -d $UD_OBJ_DIR ]]; then
	echo "Missing src, bin, include or api directories"
	exit 1
fi

C_FILES=$(ls "$SRC_DIR/"*.c)

for file in $C_FILES; do
	base_file_name=$( basename $file .c ) # ex_a
	ud_file_name="$( echo $base_file_name | sed 's/ex/ud/')" # ud_a
	output_file="${BIN_DIR}/${base_file_name}" # smth like ./bin/ex_a
	echo ${base_file_name} "${ud_file_name}.c" $output_file $file
	if [ -f "${UD_DIR}/${ud_file_name}.c" ]; then		
		gcc -c "${file}" "${UD_DIR}/${ud_file_name}.c" -I "${INCLUDE_DIR}"
        	gcc "${base_file_name}.o" "${ud_file_name}.o" -o ${output_file}
		mv  "${base_file_name}.o" "${SRC_OBJ_DIR}"
		mv "${ud_file_name}.o" "${UD_OBJ_DIR}"	
	else
		gcc -c "${file}"
        	gcc "${base_file_name}.o" -o ${output_file}
		mv  "${base_file_name}.o" "${SRC_OBJ_DIR}"
	fi	

	if [ $? -ne 0 ]; then
		echo "Compilation failed for $file!"	
	fi
done

echo "Compiled and created executables for all C files in the bin directory"	
