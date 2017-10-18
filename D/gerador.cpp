#include <bits/stdc++.h>

using namespace std;

int main( int argc, char *argv[] ) {
    int N = stoi(argv[1]), S = stoi(argv[2]);
    cout << N << endl;
    int val = N > S ? N-S : S-N;
    int r;
    val += 100;
    string str = "";
    for(int i =0 ; i < S; i++) {
      r = rand()%val;
      if (4 * r > 3 * val) str += ' ';
      else {
        if (2 * r > val) str += 'a' + ((N + rand()%26) + S)%26;
        else str += 'A' + ((N + rand()%26) + S)%26;
      }
    }
    cout << str << endl;
    return 0;
}
