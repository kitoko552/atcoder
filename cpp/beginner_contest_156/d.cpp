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

const int mod = 1000000007;
struct mint {
  ll x;

  mint(ll x=0):x((x%mod+mod)%mod){}

  mint operator-() const { return mint(-x);}
  mint& operator+=(const mint a) {
    if ((x += a.x) >= mod) x -= mod;
    return *this;
  }
  mint& operator-=(const mint a) {
    if ((x += mod-a.x) >= mod) x -= mod;
    return *this;
  }
  mint& operator*=(const mint a) {
    (x *= a.x) %= mod;
    return *this;
  }
  mint operator+(const mint a) const {
    mint res(*this);
    return res+=a;
  }
  mint operator-(const mint a) const {
    mint res(*this);
    return res-=a;
  }
  mint operator*(const mint a) const {
    mint res(*this);
    return res*=a;
  }
  mint pow(ll t) const {
    if (!t) return 1;
    mint a = pow(t>>1);
    a *= a;
    if (t&1) a *= *this;
    return a;
  }
 
  // for prime mod
  mint inv() const {
    return pow(mod-2);
  }
  mint& operator/=(const mint a) {
    return (*this) *= a.inv();
  }
  mint operator/(const mint a) const {
    mint res(*this);
    return res/=a;
  }
};

// mod(1e9+7)の世界では、Yで割ることとYの(1e9+7-2)乗は等価
mint combi(ll l, ll r) {
  mint lm = 1;
  for(ll i=l-r+1; i<=l; i++) lm *= i;
  mint rm = 1;
  for(ll i=1; i<=r; i++) rm *= i;
  return lm * rm.pow(1e9+7-2);
}

int main() {
  ll n, a, b;
  cin >> n >> a >> b;

  mint ans = 2;
  ans = ans.pow(n)-1;
  ans = ans - (combi(n, a) + combi(n, b));
  cout << ans.x << endl;
  return 0;
}
