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

ll gcd(ll a, ll b) { return b?gcd(b,a%b):a;}
ll lcm(ll a, ll b) { return a/gcd(a,b)*b;}

int f(ll a) {
  ll ad = a;
  int ans = 0;
  while(ad % 2 == 0) {
    ad /= 2;
    ans++;
  }
  return ans;
}

int main() {
  int N;
  ll M;
  cin >> N >> M;
  ll a[N];
  rep(i,N) cin >> a[i];

  int fn = f(a[0]);
  rep1(i,N) {
    if (fn != f(a[i])) {
      cout << 0 << endl;
      return 0;
    }
  }

  ll lcmv = 1;
  rep(i,N) {
    lcmv = lcm(lcmv, a[i]/2);
    if (lcmv > M) {
      cout << 0 << endl;
      return 0;
    }
  }

  ll ans = 0;
  ll k = 1;
  while(lcmv*k <= M) {
    k += 2;
    ans++;
  }
  
  cout << ans << endl;
  return 0;
}
