#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<map>
#include<queue>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int INF = 1001001001;

int main() {
  int N;
  cin >> N;
  int A[N];
  int x[N][N-1];
  int y[N][N-1];
  rep(i,N) {
    cin >> A[i];
    rep(j,A[i]) cin >> x[i][j] >> y[i][j];
  }

  int ans = 0;
  for(int bit = 1; bit < (1<<N); bit++) {
    bool ok = true;
    rep(i,N) {
      if (((bit >> i) & 1)) {
        rep(j,A[i]) {
          if (((bit >> (x[i][j]-1)) & 1) != y[i][j]) {
            ok = false;
            break;
          }
        }
        if (!ok) break;
      }
    }
    if (ok) {
      int hnum = 0;
      rep(i,N) {
        if (((bit >> i) & 1)) hnum++;
      }
      ans = max(ans, hnum);
    }
  }

  cout << ans << endl;
  return 0;
}
