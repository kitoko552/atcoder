// https://atcoder.jp/contests/dp/tasks/dp_a

#include<iostream>
#include<cmath>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i <= (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
    int N, K;
    cin >> N >> K;
    int H[N];
    rep(i,N) cin >> H[i];

    int dp[N];
    rep(i,N) dp[i] = INT_MAX;
    dp[0] = 0;

    // dp[i] = カエルが足場H[i]に辿り着くまでに支払うコストの総和の最小値
    rep(i,N)rep1(j,K) {
        if (i+j < N) dp[i+j] = min(dp[i+j], dp[i] + abs(H[i+j] - H[i]));
    }

    cout << dp[N-1] << endl;
    return 0;
}
