#include<iostream>
#include<algorithm>
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

int main() {
  int X;
  cin >> X;

  Sieve s(2*100000);
  int ans;
  for(int prime : s.primes) {
    if (prime >= X) {
      ans = prime;
      break;
    }
  }

  cout << ans << endl;
  return 0;
}
