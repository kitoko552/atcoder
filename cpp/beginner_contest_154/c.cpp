// https://atcoder.jp/contests/abc154/tasks/abc154_a

#include<iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    sort(A, A + N);

    string ans = "YES";
    for (int i = 0; i < N - 1; i++) {
        if (A[i] == A[i+1]) {
            ans = "NO";
        }
    }

    cout << ans << endl;
    return 0;
}
