// https://atcoder.jp/contests/abc153/tasks/abc153_e

#include<iostream>
#include<cmath>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int MAX_NUM = 100000000;

int main() {
    int H, N;
    cin >> H >> N;

    int A[N], B[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
    }

    int dp[H+1];
    rep(i,H+1) dp[i] = MAX_NUM;

    rep(i,H+1)rep(j,N) {
        if (A[j] >= i) dp[i] = min(dp[i], B[j]);
        else dp[i] = min(dp[i], dp[i - A[j]] + B[j]);
    }

    cout << dp[H] << endl;
    return 0;
}
