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

struct combination {
  vector<mint> fact, ifact;
  combination(int n):fact(n+1),ifact(n+1) {
    fact[0] = 1;
    for (int i = 1; i <= n; ++i) fact[i] = fact[i-1]*i;
    ifact[n] = fact[n].inv();
    for (int i = n; i >= 1; --i) ifact[i-1] = ifact[i]*i;
  }
  mint operator()(int n, int k) {
    if (k < 0 || k > n) return 0;
    return fact[n]*ifact[k]*ifact[n-k];
  }
};

// ll factorial(ll n) {
//   ll x = 1;
//   for (ll i = 1; i <= n; i++) x *= i;
//   return x;
// }

// ll combi(ll l, ll r) {
//   return factorial(l) / (factorial(l-r) * factorial(r));
// }

// mod(1e9+7)の世界では、Yで割ることとYの(1e9+7-2)乗は等価
mint combi(ll l, ll r) {
  if (l <= 0 || r <= 0) return 1;
  mint lm = 1;
  for(ll i=l-r+1; i<=l; i++) lm *= i;
  mint rm = 1;
  for(ll i=1; i<=r; i++) rm *= i;
  return lm * rm.pow(1e9+7-2);
}

int main() {
  int N, K;
  cin >> N >> K;

  combination comb(1000000);
  cout << comb(N, K).x << endl;
  return 0;
}
