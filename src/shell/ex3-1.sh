#!/bin/sh
myvar="hello world"
if [ -z "$1" ]; then
	a=10
else
	a=$1
fi
for i in $(seq 1 $a)
do
	echo $myvar
done
exit 0
