#!/bin/sh

BMI=$(echo "scale=2; $1 / ( $2 / 100 * $2 / 100 )" | bc)
if [ "$(echo "$BMI < 18.5" | bc)" -eq 1 ]
then
  echo "저체중입니다."
elif [ "$(echo "$BMI >= 23" | bc)" -eq 1 ]
then
  echo "과체중입니다."
else
  echo "정상체중입니다."
fi
exit 0
