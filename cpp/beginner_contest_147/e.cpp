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

const int MAD = 80*(80+80);
int dp[80+1][80+1][MAD];

int main() {
  int H, W;
  cin >> H >> W;
  int A[H][W];
  int B[H][W];
  rep(i,H)rep(j,W) cin >> A[i][j];
  rep(i,H)rep(j,W) cin >> B[i][j];

  dp[0][0][abs(A[0][0] - B[0][0])] = 1;
  rep(i,H)rep(j,W) {
    rep(k,MAD) {
      if (dp[i][j][k] == 1) {
        if (i+1 < H) {
          int d = abs(A[i+1][j] - B[i+1][j]);
          dp[i+1][j][k+d] = 1;
          dp[i+1][j][abs(k-d)] = 1;
        }
        if (j+1 < W) {
          int d = abs(A[i][j+1] - B[i][j+1]);
          dp[i][j+1][k+d] = 1;
          dp[i][j+1][abs(k-d)] = 1;
        }
      }
    }
  }

  int ans;
  rep(i,MAD) {
    if (dp[H-1][W-1][i] == 1) {
      ans = i;
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
