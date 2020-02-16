// https://atcoder.jp/contests/dp/tasks/dp_c

#include<iostream>
#include<cmath>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
    int N;
    cin >> N;
    int a[N], b[N], c[N];
    rep(i,N) cin >> a[i] >> b[i] >> c[i];

    int dp[N+1][3];
    rep(i,N+1)rep(j,3) dp[i][j] = 0;
    dp[0][0] = a[0];
    dp[0][1] = b[0];
    dp[0][2] = c[0];

    // dp[i][j] = 太郎くんがi日目に行動jをとったとき得る幸福度の総和の最大値
    rep(i,N+1)rep(j,3) {
        if (j == 0)
            dp[i+1][j] = a[i+1] + max(dp[i][1], dp[i][2]);
        if (j == 1)
            dp[i+1][j] = b[i+1] + max(dp[i][0], dp[i][2]);
        if (j == 2)
            dp[i+1][j] = c[i+1] + max(dp[i][0], dp[i][1]);
    }

    int ans = max(dp[N][0], max(dp[N][1], dp[N][2]));
    cout << ans << endl;
    return 0;
}
