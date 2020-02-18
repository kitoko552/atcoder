// https://atcoder.jp/contests/dp/tasks/dp_e

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

ll dp[101][100*1000 + 1];

int main() {
    int N;
    ll W;
    cin >> N >> W;
    ll w[N], v[N];
    rep(i,N) cin >> w[i] >> v[i];
    
    rep(i,N+1)rep(j,100*1000+1) dp[i][j] = 1000000001;
    dp[0][0] = 0;
    
    // dp[i+1][j] = i番目までの品物から価値の総和がjになるように選んだときの重さの最小値
    rep(i,N)rep(j,100*1000+1) {
        if (v[i] > j) {
            dp[i+1][j] = dp[i][j];
        } else {
            dp[i+1][j] = min(dp[i][j], dp[i][j - v[i]] + w[i]); 
        }
    }

    int ans = 0;
    rep(i,100*1000+1) {
        if (dp[N][i] <= W) {
            ans = max(ans, i);
        }
    }

    cout << ans << endl;
    return 0;
}
