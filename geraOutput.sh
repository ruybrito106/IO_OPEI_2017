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

g++ D/solucao.cpp -o D/s

for (( i=0; i<100; i++));
do
  ./D/s < D/d$((i)).in > D/d$((i)).out
done

rm D/s

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

g++ H/solucao.cpp -o H/s -std=c++11

for (( i=0; i<100; i++));
do
  ./H/s < H/h$((i)).in > H/h$((i)).out
done

rm H/s

g++ I/solucao.cpp -o I/s -std=c++11

for (( i=0; i<100; i++));
do
  ./I/s < I/i$((i)).in > I/i$((i)).out
done

rm I/s

g++ J/solucao.cpp -o J/s -std=c++11

for (( i=0; i<100; i++));
do
  ./J/s < J/j$((i)).in > J/j$((i)).out
done

rm J/s
