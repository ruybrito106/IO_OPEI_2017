#include <bits/stdc++.h>

using namespace std;

int main() {
  int N;
  cin >> N;
  int O, P, Q;
  vector<int> v;
  int index, maxi = 0;
  for(int i = 1; i <= N; i++) {
    cin >> O >> P >> Q;
    if (Q) P <<= 1;
    v.push_back(P);
    maxi = max(maxi, P);
  }
  for(int i = 1; i <= N; i++)
    if (v[i - 1] == maxi)
      index = i;
  vector<int> ans;
  for(int i = 1; i <= N; i++)
    if (i != index)
      ans.push_back(i);
  ans.push_back(index);
  for(int i = 0; i < N; i++) {
    if (i) cout << ' ';
    cout << ans[i];
  }
  return 0;
}
