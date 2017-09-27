#include <bits/stdc++.h>

using namespace std;

int main() {
  int N;
  cin >> N;
  double H = ((N * sqrt(6.0)) / 3.0);
  double V = ((N * N * N) * sqrt(2.0) / 12.0);
  double A = N * N * sqrt(3.0);
  printf("%.2lf %.2lf %.2lf\n", H, A, V);
  return 0;
}
