#include <bits/stdc++.h>

using namespace std;

int main() {
  cout << 500 << ' ' << 500 << endl << 10 << endl;
  int a, b, c, d;
  for(int i = 0; i < 10; i++) {
    a = 1 + rand()%500, b = 1 + rand()%500;
    c = a + rand()%(500 - a);
    d = b + rand()%(500 - b);
    cout << a << ' ' << b << ' ' << c << ' ' << d << endl;
  }
  return 0;
}
