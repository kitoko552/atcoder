// https://atcoder.jp/contests/dp/tasks/dp_d

#include<iostream>
#include<cmath>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
    int N, W;
    cin >> N >> W;
    ll w[N], v[N];
    rep(i,N) cin >> w[i] >> v[i];

    ll dp[N+1][W+1];
    rep(i,N+1)rep(j,W+1) dp[i][j] = 0;
    
    // dp[i][j] = i番目までの品物から重さの総和がj以下になるように選んだときの価値の最大値
    rep(i,N)rep(j,W+1) {
        if (w[i] > j) dp[i+1][j] = dp[i][j];
        else dp[i+1][j] = max(dp[i][j], dp[i][j - w[i]] + v[i]);
    }
    
    cout << dp[N][W] << endl;
    return 0;
}
