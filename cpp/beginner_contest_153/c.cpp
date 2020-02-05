// https://atcoder.jp/contests/abc153/tasks/abc153_c

#include<iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    int H[N];
    for (int i = 0; i < N; i++) {
        cin >> H[i];
    }

    sort(H, H+N, greater<>());

    for (int i = 0; i < K && i < N; i++) {
        H[i] = 0;
    }

    long sum = 0;
    for (int h: H) {
        sum += h;
    }

    cout << sum << endl;
    
    return 0;
}
