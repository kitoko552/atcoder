// https://atcoder.jp/contests/abc152/tasks/abc152_e

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

// エラトステネスの篩（Sieve of Erastosthenes）
struct Sieve {
  int n;

  // 0からnまで、その数を素因数分解した時に求まる最小の素数のリスト
  // 外部から使われることはないはず
  vector<int> f;

  // nまでの素数リスト
  vector<int> primes;

  Sieve(int n=1):n(n), f(n+1) {
    f[0] = f[1] = -1; // 0と1は素数ではないので例外的に-1を入れる
    for (ll i = 2; i <= n; ++i) {
      if (f[i]) continue;
      primes.push_back(i);
      f[i] = i;
      for (ll j = i*i; j <= n; j += i) {
        if (!f[j]) f[j] = i;
      }
    }
  }

  // xが素数かどうかのbool値を返す (x <= n)
  bool isPrime(int x) { return f[x] == x;}

  // xの素因数分解の結果リストを返す (x <= n)
  vector<int> factorList(int x) {
    vector<int> res;
    while (x != 1) {
      res.push_back(f[x]);
      x /= f[x];
    }
    return res;
  }

  // xの素因数分解の結果をP(基数, 指数)の形にしたリストを返す (x <= n)
  vector<P> factor(int x) {
    vector<int> fl = factorList(x);
    if (fl.size() == 0) return {};
    vector<P> res(1, P(fl[0], 0));
    for (int p : fl) {
      if (res.back().first == p) {
        res.back().second++;
      } else {
        res.emplace_back(p, 1);
      }
    }
    return res;
  }
};

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
  Sieve sieve(1e6);
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i,n) cin >> a[i];
 
  map<int,int> mp;
  rep(i,n) {
    auto f = sieve.factor(a[i]);
    for (auto p : f) {
      mp[p.first] = max(mp[p.first], p.second);
    }
  }
 
  mint lcm = 1;
  for (auto p : mp) {
    rep(i,p.second) {
      lcm *= p.first;
    }
  }
 
  mint ans;
  rep(i,n) {
    mint b = lcm/a[i];
    ans += b;
  }
  cout << ans.x << endl;
  return 0;
}
