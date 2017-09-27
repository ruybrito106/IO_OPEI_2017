#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, a;
  cin >> N;
  if (!N) {
    cout << "100.00%";
    return 0;
  }
  int sum = 0;
  vector<int> vec;
  for(int i = 0; i < N; i++) {
    cin >> a;
    vec.push_back(a);
    sum += vec[i];
  }
  double med = (double) sum / (double) N;
  int cnt = 0;
  for(int i =0; i < N; i++) {
    if ((double) vec[i] >= med) ++cnt;
  }
  double ans = (double) cnt / (double) N;
  printf("%.2lf%%", 100.0 * ans);
  return 0;
}
