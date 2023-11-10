#!/bin/bash

if [ -d $1 ]
then
  eval "ls"
else
  mkdir $1
fi

cd "$1"
touch file0.txt
touch file1.txt
touch file2.txt
touch file3.txt
touch file4.txt

mkdir files
tar -cvf files/files.tar file0.txt file1.txt file2.txt file3.txt file4.txt
tar -xvf files/files.tar -C files

exit 0
