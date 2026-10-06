#!/bin/bash

if [ -z $1 ]; then
	echo "Missing chapter number in argument!"
	exit 1
fi

if [ -d "chapter$1" ]; then
	echo "Chapter directory already exists!"
	exit 1
fi

echo "This is the chapter number: $1"
mkdir "chapter$1"
mkdir "chapter$1/src" "chapter$1/bin" "chapter$1/api" "chapter$1/include" "chapter$1/docs"
mkdir "chapter$1/src/obj" "chapter$1/api/obj" 
cp build.sh "chapter$1"
touch "chapter$1/docs/chapter$1_solutions.txt"

if [[ $? -eq 0 ]]; then
	echo "Chapter$1 creation successful!"
	exit 0
else 
	echo "Chapter$1 creation failed"
	exit 1
fi
