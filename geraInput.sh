#!/bin/bash

g++ A/gerador.cpp -o A/g -std=c++11

for (( i=0; i<100; i++));
do
  ./A/g $((RANDOM % 1000000)) > A/a$((i)).in
done

rm A/g

g++ B/gerador.cpp -o B/g -std=c++11

for (( i=0; i<100; i++));
do
  ./B/g $((RANDOM % 1000)) > B/b$((i)).in
done

rm B/g

g++ C/gerador.cpp -o C/g -std=c++11

for (( i=0; i<100; i++));
do
  ./C/g $((RANDOM % 10000)) > C/c$((i)).in
done

rm C/g

g++ E/gerador.cpp -o E/g -std=c++11

for (( i=0; i<100; i++));
do
  ./E/g $((RANDOM % 500)) $((RANDOM % 500)) $((RANDOM % 10))> E/e$((i)).in
done

rm E/g

g++ F/gerador.cpp -o F/g -std=c++11

for (( i=0; i<100; i++));
do
  ./F/g $((RANDOM % 18)) $((RANDOM % 100)) > F/f$((i)).in
done

rm F/g
