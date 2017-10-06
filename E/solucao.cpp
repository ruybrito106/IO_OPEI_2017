#include <bits/stdc++.h>
#define fr(a, b, c) for(int a = b; a < c; ++a)

using namespace std;

int main() {
  int N, M, K;
  cin >> N >> M >> K;
  int mat[500][500];
  memset(mat, 0, sizeof mat);

  int a, b, c, d;
  fr(i, 0, K) {
    cin >> a >> b >> c >> d;
    a--, b--, c--, d--;
    fr(j, a, c+1) fr(k, b, d+1) {
      mat[j][k] = 1;
    }
  }
  int cnt = 0, tot = N * M;
  fr(i, 0, N) fr(j, 0, M) if (mat[i][j]) cnt++;

  double ans = (double) cnt / (double) tot;
  printf("%.2lf%%", 100.0 * ans);
  return 0;

  return 0;
}
