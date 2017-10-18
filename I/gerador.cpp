#include <bits/stdc++.h>

using namespace std;

int main( int argc, char *argv[] ) {
    int N = stoi(argv[1]), P = stoi(argv[2]);
    cout << N << endl;
    for(int i = 0; i < N; i++) {
      cout << i+1 << ' ' << rand() % P << ' ' << ((rand()%P >= (P/3)) ? 1 : 0) << endl;
    }
    return 0;
}
