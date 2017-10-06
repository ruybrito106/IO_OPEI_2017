#include <bits/stdc++.h>
#define fr(a, b, c) for(int a = b; a < c; ++a)

using namespace std;

int main( int argc, char *argv[] ) {
    int N = stoi(argv[1])+1, M = stoi(argv[2])+1, K = stoi(argv[3])+1;
    cout << N << ' ' << M << endl << K << endl;
    int a, b, c, d;
    fr(i, 0, K) {
      a = rand() % N;
      b = rand() % M;

      c = rand() % (N - a);
      d = rand() % (M - b);
      a++, b++;
      cout << a << ' ' << b << ' ' << a+c << ' ' << b+d << endl;
    }
    return 0;
}
