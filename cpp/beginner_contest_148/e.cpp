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

int main() {
  ll N;
  cin >> N;

  if (N % 2 == 1) {
    cout << 0 << endl;
    return 0;
  }

  ll ans = 0;
  ll numer = 10;
  while(N/numer >= 1) {
    ans += N/numer;
    numer *= 5;
  }
  cout << ans << endl;
  return 0;
}
