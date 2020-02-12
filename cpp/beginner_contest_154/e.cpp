// https://atcoder.jp/contests/abc154/tasks/abc154_e

#include<iostream>
#define rep(i, n) for (int i = 0; i< (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int dp[105][4][2];

int main() {
    string N;
    int K;
    cin >> N;
    cin >> K;

    int L = N.size();
    dp[0][0][0] = 1;
    rep(i,L)rep(j,4)rep(k,2) {
        int nd = N[i]-'0'; // char to int
        rep(d,10) {
            int ni = i+1, nj = j, nk = k;
            if (d != 0) nj++;
            if (nj > K) continue;
            if (k == 0) {
                if (d > nd) continue;
                if (d < nd) nk = 1;
            }
            dp[ni][nj][nk] += dp[i][j][k];
        }
    }

    int ans = dp[L][K][0] + dp[L][K][1];
    cout << ans << endl;
    return 0;
}
