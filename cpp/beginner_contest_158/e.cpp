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

ll factorial(ll n) {
  ll x = 1;
  for (ll i = 1; i <= n; i++) x *= i;
  return x;
}

ll combi(ll l, ll r) {
  return factorial(l) / (factorial(l-r) * factorial(r));
}

int main() {
  int N, P;
  string S;
  cin >> N >> P;
  cin >> S;

  reverse(S.begin(), S.end());
  int mods[N+1];
  mods[0] = 0;
  map<int, int> m;
  // rep(i,P) m[i] = 0;
  int ans = 0;
  rep(i,N) {
    int s = S[i]-'0';
    int a = s % P;
    int sum = mods[i] + a;
    mods[i+1] = sum;

    int j = sum - P;
    if (m[j] && m[j]) {
      ans += m[j];
    }
    
    if (m[sum]) m[sum] += 1;
    else m[sum] = 1;

    // if (a == 0) ans++;
    // ans += m[a];
    // m[a] += 1;
  }

  // rep1(i,P) {
    
  // }

  // int sum = 0;
  // rep1(i,N+1) {
  //   if (mods[i] % P == 0) sum++;
  // }

  // int ans = combi(sum, 2) + sum;
  cout << ans << endl;
  return 0;
}
