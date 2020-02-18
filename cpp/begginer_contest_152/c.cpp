// https://atcoder.jp/contests/abc152/tasks/abc152_c

#include<iostream>
#include<cmath>
#include<vector>
#include<map>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int INF = 1001001001;

int main() {
  int N;
  cin >> N;
  int P[N];
  rep(i,N) cin >> P[i];

  int ans = N;
  int mn = INF;
  rep(i,N) {
    if (mn < P[i]) ans--;
    mn = min(mn, P[i]);
  }

  cout << ans << endl;
  return 0;
}
