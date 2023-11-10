#!/bin/bash

Linux () {
  echo "함수 안으로 들어왔음."
  command="ls $var"
  echo $command
  eval $command
}
echo "프로그램을 시작합니다."
var=$1
Linux
echo "프로그램을 종료합니다."
exit 0
