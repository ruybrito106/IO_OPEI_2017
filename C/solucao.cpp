#include <bits/stdc++.h>

using namespace std;

int N;

bool is_inc_sorted(const vector<int> &v) {
  bool ans = true;
  for(int i = 1; i <= N; i++)
    ans = ans && v[i-1] == i;
  return ans;
}

bool is_dec_sorted(const vector<int> &v) {
  bool ans = true;
  for(int i = N, k = 0; i >= 1; i--, k++)
    ans = ans && v[k] == i;
  return ans;
}

bool is_full(const vector<int> &v) {
  map<int, int> has;
  for(int i = 0; i < N; i++) has[v[i]] = 1;
  bool ans = true;
  for(int i = 1; i <= N; i++)
    ans = ans && has[i];
  return ans;
}

int main() {
  cin >> N;
  vector<int> vec;
  int a;
  for(int i=0 ; i < N; i++) {
    scanf("%d", &a);
    vec.push_back(a);
  }
  if (is_inc_sorted(vec)) cout << "PERMUTACAO CRESCENTE";
  else if (is_dec_sorted(vec)) cout << "PERMUTACAO DECRESCENTE";
  else if (is_full(vec)) cout << "PERMUTACAO COMUM";
  else cout << "ERRO";

  return 0;
}
