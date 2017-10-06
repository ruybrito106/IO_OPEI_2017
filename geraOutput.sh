#!/bin/bash

g++ A/solucao.cpp -o A/s

for (( i=0; i<100; i++));
do
  ./A/s < A/a$((i)).in > A/a$((i)).out
done

rm A/s

g++ B/solucao.cpp -o B/s

for (( i=0; i<100; i++));
do
  ./B/s < B/b$((i)).in > B/b$((i)).out
done

rm B/s

g++ C/solucao.cpp -o C/s

for (( i=0; i<100; i++));
do
  ./C/s < C/c$((i)).in > C/c$((i)).out
done

rm C/s

g++ E/solucao.cpp -o E/s

for (( i=0; i<100; i++));
do
  ./E/s < E/e$((i)).in > E/e$((i)).out
done

rm E/s

g++ F/solucao.cpp -o F/s -std=c++11

for (( i=0; i<100; i++));
do
  ./F/s < F/f$((i)).in > F/f$((i)).out
done

rm F/s

g++ G/solucao.cpp -o G/s -std=c++11

for (( i=0; i<100; i++));
do
  ./G/s < G/g$((i)).in > G/g$((i)).out
done

rm G/s

