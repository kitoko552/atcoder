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
  ll a, b, c;
  cin >> a >> b >> c;

  string ans;
  ll d = c - a - b;
  if (d > 0 && 4*a*b < d*d) ans = "Yes";
  else ans = "No";
  cout << ans << endl;
  return 0;
}
