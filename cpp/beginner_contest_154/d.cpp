// https://atcoder.jp/contests/abc154/tasks/abc154_d

#include<iostream>
#include <iomanip>
using namespace std;

int main() {
    int N, K;
    cin >> N;
    cin >> K;

    int p[N];
    for (int i = 0; i < N; i++) {
        cin >> p[i];
    }

    double exps[N];
    for (int i = 0; i < N; i++) {
        int sum = p[i]*(p[i]+1) / 2;
        exps[i] = double(sum) / double(p[i]);
    }

    double exp = 0.0;
    for (int i = 0; i < K; i++) {
        exp += exps[i];
    }

    double ans = exp;
    for (int i = 1; i < N - (K-1); i++) {
        exp = exp - exps[i-1] + exps[i+(K-1)];
        if (ans < exp) {
            ans = exp;
        }
    }

    cout << fixed << setprecision(12) << ans << endl;
    return 0;
}
