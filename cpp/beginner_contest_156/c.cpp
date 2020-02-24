#include<iostream>
#include <algorithm>
#include<cmath>
#include<vector>
#include<map>
#include<queue>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int INF = 1001001001;

int main() {
  int N;
  cin >> N;
  int X[N];
  rep(i,N) cin >> X[i];

  int mx = 0;
  rep(i,N) mx = max(mx, X[i]);
  ll ans = INF;
  rep1(i,mx+1) {
    ll sum = 0;
    rep(j,N) {
      sum += pow(X[j] - i, 2);
    }
    ans = min(ans, sum);
  }
  cout << ans << endl;
  return 0;
}
