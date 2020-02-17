// https://atcoder.jp/contests/abc155/tasks/abc155_d

#include<iostream>
#include<cmath>
#include<vector>
#include<map>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll INF = ll(1e18)+1;

int main() {
    int N, K;
    cin >> N >> K;
    vector<ll> A(N);
    rep(i,N) cin >> A[i];

    sort(A.begin(), A.end());

    ll l = -INF, r = INF;

    while (l+1 < r) {
        ll x = (l+r)/2;
        bool ok = [&]{
            ll tot = 0;
            rep(i,N) {
                if (A[i] < 0) {
                    int l = -1, r = N;
                    while (l+1<r) {
                        int c = (l+r)/2;
                        if (A[c]*A[i] < x) r = c; else l = c;
                    }
                    tot += N-r;
                } else {
                    int l = -1, r = N;
                    while (l+1<r) {
                        int c = (l+r)/2;
                        if (A[c]*A[i] < x) l = c; else r = c;
                    }
                    tot += r;
                }
                if (A[i]*A[i] < x) tot--;
            }
            tot /= 2;
            return tot < K;
        }();
        if (ok) l = x; else r = x;
    }

    cout << l << endl;
    return 0;
}
