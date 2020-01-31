// https://atcoder.jp/contests/abs/tasks/abc088_b

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }

    sort(a, a + n, greater<>());

    int alice = 0;
    int bob = 0;
    for (int i=0; i<n; i++) {
        if (i % 2 == 0) {
            alice += a[i];
        } else {
            bob += a[i];
        }
    }

    cout << (alice - bob) << endl;
    return 0;
}
