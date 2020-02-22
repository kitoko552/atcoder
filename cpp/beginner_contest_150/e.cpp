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

int main() {
  int N;
  cin >> N;
  vector<ll> C(N);
  rep(i,N) cin >> C[i];

  sort(C.begin(), C.end(), greater<>());  
  mint sum = 0;
  mint base = mint(2).pow(N-1);
  rep(i,N) {    
    mint d = base + mint(i)*base/2;
    mint c = C[i];
    sum += c * d;
  }
  mint n = mint(2).pow(N);
  mint ans = sum*n;  
  cout << ans.x << endl;
  return 0;
}
