#!/bin/bash

g++ A/solucao.cpp -o A/s

for (( i=0; i<151; i++));
do
  ./A/s < A/a$((i)).in > A/a$((i)).out
done

rm A/s

g++ B/solucao.cpp -o B/s

for (( i=0; i<151; i++));
do
  ./B/s < B/b$((i)).in > B/b$((i)).out
done

rm B/s

g++ C/solucao.cpp -o C/s

for (( i=0; i<151; i++));
do
  ./C/s < C/c$((i)).in > C/c$((i)).out
done

rm C/s
#
# g++ E/solucao.cpp -o E/s
#
# for (( i=0; i<121; i++));
# do
#   ./E/s < E/e$((i)).in > E/e$((i)).out
# done
#
# g++ F/solucao.cpp -o F/s
#
# for (( i=0; i<121; i++));
# do
#   ./F/s < F/f$((i)).in > F/f$((i)).out
# done
