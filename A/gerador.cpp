#include <bits/stdc++.h>

using namespace std;

int main( int argc, char *argv[] ) {
    int N = stoi(argv[1]);
    cout << N << endl;
    bool first = true;
    for (int i = 0; i < N; i++) {
        int val = rand()%11;
        if (first) {
            cout << val;
            first = !first;
        } else {
            cout << ' ' << val;
        }
    }
    return 0;
}
