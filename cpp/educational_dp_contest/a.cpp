// https://atcoder.jp/contests/dp/tasks/dp_a

#include<iostream>
#include<cmath>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
    int N;
    cin >> N;
    int H[N];
    rep(i,N) cin >> H[i];

    int dp[N];
    rep(i,N) dp[i] = INT_MAX;
    dp[0] = 0;

    // dp[i] = カエルが足場H[i]に辿り着くまでに支払うコストの総和の最小値
    rep(i,N) {
        if (i+1 < N) dp[i+1] = min(dp[i+1], dp[i] + abs(H[i+1] - H[i]));
        if (i+2 < N) dp[i+2] = min(dp[i+2], dp[i] + abs(H[i+2] - H[i]));
    }

    cout << dp[N-1] << endl;
    return 0;
}
