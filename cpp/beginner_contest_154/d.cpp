// https://atcoder.jp/contests/abc154/tasks/abc154_d

#include<iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    int p[N];
    for (int i = 0; i < N; i++) {
        cin >> p[i];
    }

    float ans = 0.0f;
    for (int i = 0; i < N - 2; i++) {
        float exp = 0.0f;
        for (int k = i; k < i + K; k++) {
            int sum = 0;
            for (int j = 1; j <= p[k]; j++) {
                sum += j;
            }
            exp += float(sum) / float(p[k]);
        }
        ans = max(ans, exp);
    }

    cout << ans << endl;
    return 0;
}
