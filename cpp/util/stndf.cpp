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

/// エラトステネスの篩の過程でmin以上max以下の素数リストを作成し、そのsizeを返す
int calc(ll min, ll max) {
  // 0からmaxまで、その数を素因数分解した時に求まる最小の素数のリスト
  vector<ll> f(max+1);
  // min以上max以下の素数リスト
  vector<ll> primes;

  f[0] = f[1] = -1; // 0と1は素数ではないので例外的に-1を入れる
  for (ll i = 2; i <= max; ++i) {
    // 最小の素数がすでに計算済み => ふるい落とし済みの場合はcontinue
    if (f[i]) continue;
    if (i >= min) primes.push_back(i);
    f[i] = i;

    // iの倍数の最小の素数はi（iの倍数をふるい落す） 
    for (ll j = i*i; j <= max; j += i) {
      if (!f[j]) f[j] = i;
    }
  }

  return primes.size();
}

int main() {
  int N;
  cin >> N;
  ll a[N], b[N];
  rep(i,N) {
    cin >> a[i] >> b[i];
  }

  rep(i,N) {
    ll ans = calc(a[i], b[i]);
    cout << ans << endl;
  }

  return 0;
}

