#include <bits/stdc++.h>
#define fr(a, b, c) for(int a = b; a < c; ++a)

using namespace std;

int main( int argc, char *argv[] ) {
    int S = stoi(argv[1])+1, P = stoi(argv[2]);
    string str;
    fr(i, 0, S) {
      int x = rand() % 100;
      if (x >= P) {
        str.push_back('?');
      } else {
        x = rand() % 10;
        x += (P-1) / 10;
        x /= 2;
        char aux = '0' + x;
        str.push_back(aux);
      }
    }
    cout << str;
    return 0;
}
