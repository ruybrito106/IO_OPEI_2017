#!/bin/bash

VAR=a
MVAR=a2
ACC=43
WA=45

for (( i=0; i<10; i++));
do
  g++ src/$VAR.cpp -o $VAR -std=c++11
  timeout 1s ./$VAR < io/$VAR.in > io/$MVAR.out
  RET=$(diff -qrs --ignore-blank-lines --ignore-space-change io/$VAR.out io/$MVAR.out)
  if [ $((${#RET}-2)) -eq $ACC ];
  then
    echo Problem $VAR: Accepted!
  elif [ $((${#RET}-2)) -eq $WA ];
  then
    if [ -s io/$MVAR.out ];
    then
      echo Problem $VAR: Wrong answer!
    else
      echo Problem $VAR: Timeout!
    fi
  else
    echo Problem $VAR: Unknown error!
  fi

  if [ -s $VAR ];
  then
    rm -f $VAR
  fi

  if [ -s io/$MVAR.out ];
  then
    rm -f io/$MVAR.out
  fi

  VAR=$(echo "$VAR" | tr "0-9a-z" "1-9a-z_")
  MVAR=$VAR
  MVAR+=2
done
