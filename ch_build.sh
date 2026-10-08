#!/bin/bash

set -e

if [ -z $1 ]; then
	echo "Missing chapter number in argument!"
	exit 1
fi

NAME="chapter$1"
#trap "rm -rf ${NAME}" EXIT

if [ -d "${NAME}" ]; then
	echo "Chapter directory already exists!"
	exit 1
fi

mkdir -p "${NAME}/src/obj" "${NAME}/bin" "${NAME}/api/obj" "${NAME}/include" "${NAME}/docs"
cp build.sh "${NAME}"
touch "${NAME}/docs/${NAME}_solutions.txt"

if [[ $? -eq 0 ]]; then
	echo "Chapter$1 creation successful!"
        echo "This is the directory structure: "
	tree ${NAME}	
	exit 0
else 
	echo "Chapter$1 creation failed"
	exit 1
fi
