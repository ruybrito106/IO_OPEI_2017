#include <bits/stdc++.h>

using namespace std;

int main() {
  int N;
  string s;
  cin >> N;
  getchar();
  getline(cin, s);
  N %= 26;
  for(int i =0 ; i < s.size(); i++) {
    if (s[i] == ' ') continue;
    if (s[i] >= 'a' && s[i] <= 'z') {
      if (N + s[i] > 'z') s[i] = 'a' + N + s[i] - 'z' - 1;
      else s[i] += N;
    } else {
      if (N + s[i] > 'Z') s[i] = 'A' + N + s[i] - 'Z' - 1;
      else s[i] += N;
    }
  }
  cout << s;
}
