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

g++ D/gerador.cpp -o D/g -std=c++11

for (( i=0; i<100; i++));
do
  ./D/g $((RANDOM % 100000)) $((RANDOM % 1000000)) > D/d$((i)).in
done

rm D/g

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

g++ G/gerador.cpp -o G/g -std=c++11

for (( i=0; i<100; i++));
do
  ./G/g $((RANDOM % 100)) $((RANDOM % 100)) > G/g$((i)).in
done

rm G/g

g++ H/gerador.cpp -o H/g -std=c++11

for (( i=0; i<100; i++));
do
  ./H/g $((RANDOM % 99999)) $((RANDOM % 2)) > H/h$((i)).in
done

rm H/g

g++ I/gerador.cpp -o I/g -std=c++11

for (( i=0; i<100; i++));
do
  ./I/g $((RANDOM % 10000)) $((RANDOM % 1000)) > I/i$((i)).in
done

rm I/g

g++ J/gerador.cpp -o J/g -std=c++11

for (( i=0; i<100; i++));
do
  ./J/g $((RANDOM % 24)) $((RANDOM % 60)) $((RANDOM % 24)) $((RANDOM % 60)) > J/j$((i)).in
done

rm J/g
