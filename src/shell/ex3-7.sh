#!/bin/bash

mkdir $1
cd $1

mk_filefolder () {
for i in 0 1 2 3 4
do
  touch file$i.txt
  mkdir file$i
done 
return
}

link () {
for i in 0 1 2 3 4
do
  cd file$i
  ln -s file$i.txt file$i.txt
  cd ..
done
return
}

mk_filefolder 
link

exit 0
