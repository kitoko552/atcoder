// https://atcoder.jp/contests/abc155/tasks/abc155_b

#include<iostream>
#include<cmath>
#include<vector>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
    int N;
    cin >> N;
    int A[N];
    rep(i,N) cin >> A[i];

    string ans = "APPROVED";
    rep(i,N) {
        if (A[i] % 2 == 0 && A[i] % 3 != 0 && A[i] % 5 != 0) {
            ans = "DENIED";
            break;
        }
    }

    cout << ans << endl;
    return 0;
}
