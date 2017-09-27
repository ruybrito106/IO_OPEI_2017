#include <bits/stdc++.h>

using namespace std;

int main( int argc, char *argv[] ) {
  int N = stoi(argv[1]);
  cout << N << endl;
  if (N < 2500) {
    bool first = true;
    for (int i = 1; i <= N; i++) {
      if (first) {
        first = !first;
        cout << i;
      } else {
        cout << ' ' << i;
      }
    }
  } else if (N >= 2500 && N < 5000) {
    bool first = true;
    for (int i = N; i >= 1; i--) {
      if (first) {
        first = !first;
        cout << i;
      } else {
        cout << ' ' << i;
      }
    }
  } else if (N >= 5000 && N < 7500) {
    bool first = true;
    for (int i = N; i >= 1; i--) {
      if (first) {
        first = !first;
        cout << 1 + rand() % 100;
      } else {
        cout << ' ' << 1 + rand() % 100;
      }
    }
  } else {
    bool first = true;
    for (int i = 1; i <= N - 2; i++) {
      if (first) {
        first = !first;
        cout << i;
      } else {
        cout << ' ' << i;
      }
    }
    cout << ' ' << N << ' ' << N - 1;
  }
  return 0;
}
