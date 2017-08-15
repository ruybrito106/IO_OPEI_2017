#include <bits/stdc++.h>

using namespace std;

int arr[1000001];

int main() {
  int N, sum = 0, cnt = 0;
  cin >> N;
  int aux = 10;
  for(int i = 0; i < N; i++) scanf("%d", &arr[i]);
  for(int i = 0; i < N; i++) sum += arr[i];
  sum /= N;
  for(int i = 0; i < N; i++) if (arr[i] >= sum) ++cnt;
  printf("%.2lf", (100.0 * (double)cnt) / (double) N);
  cout << "%\n";
  return 0;
}
