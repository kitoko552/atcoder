// https://atcoder.jp/contests/abc155/tasks/abc155_d

#include<iostream>
#include<cmath>
#include<vector>
#include<map>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int INF = 1001001001;

int main() {
  string N;
  cin >> N;

  // dp[i][j] = 下からi桁目まで決めた時、繰り下がりがj（ない0, ある1）の時の最小値
  reverse(N.begin(), N.end());
  N += '0';
  int L = N.size();
  int dp[L+1][2];
  rep(i,L+1)rep(j,2) dp[i][j] = INF;
  dp[0][0] = 0;

  rep(i,L)rep(j,2) {
    int n = N[i]-'0';
    n += j;
    rep(a,10) {
      int ni = i+1, nj = 0;
      int b = a-n;
      if (b < 0) {
        nj = 1;
        b += 10;
      }
      dp[ni][nj] = min(dp[ni][nj], dp[i][j]+a+b);
    }
  }
  
  int ans = dp[L][0];
  cout << ans << endl;
  return 0;
}
