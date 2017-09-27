#!/bin/bash

g++ A/gerador.cpp -o A/g -std=c++11

for (( i=0; i<151; i++));
do
  ./A/g $((RANDOM % 1000000)) > A/a$((i)).in
done

rm A/g

g++ B/gerador.cpp -o B/g -std=c++11

for (( i=0; i<151; i++));
do
  ./B/g $((RANDOM % 1000)) > B/b$((i)).in
done

rm B/g

g++ C/gerador.cpp -o C/g -std=c++11

for (( i=0; i<151; i++));
do
  ./C/g $((RANDOM % 10000)) > C/c$((i)).in
done

rm C/g
#
# g++ E/gerador.cpp
#
# for (( i=0; i<121; i++));
# do
#   ./a.out > e$((i)).in
# done
#
# g++ F/gerador.cpp
#
# for (( i=0; i<121; i++));
# do
#   ./a.out > f$((i)).in
# done
