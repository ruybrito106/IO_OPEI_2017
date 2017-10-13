#include <bits/stdc++.h>
using namespace std;

int main() {
    while(1)
    {
        int h1, m1, h2, m2;
        cin >> h1;
        cin >> m1;
        cin >> h2;
        cin >> m2;
        if(!h1 && !m1 && !h2 && !m2)
            break;
        int m = (m2 - m1 + 60) % 60;
        int h = (h2 - h1 + 24) % 24;
        if (m1 > m2)
            h = (h2 - h1 + 24 - 1) % 24;

        h *= 60;
        cout << m + h << endl;
    }


    return 0;
}
