#include <bits/stdc++.h>
#define fr(a, b, c) for(int a = b; a < c; ++a)

using namespace std;

typedef long long ll;

int main() {
  string str, a, b;
  cin >> str;
  fr(i, 0, str.size()) {
    if (str[i] == '?') {
      a.push_back('0');
      b.push_back('9');
    } else {
      a.push_back(str[i]);
      b.push_back(str[i]);
    }
  }

  int j = 0;
  while (j < a.size() && a[j] == '0') a[j] = '1';

  ll v1, v2;
  v1 = stoll(a), v2 = stoll(b);

  cout << llabs(v1 - v2) << endl;

  return 0;
}
