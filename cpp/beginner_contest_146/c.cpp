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
  ll A, B, X;
  cin >> A >> B >> X;

  ll l = 0;
  ll r = 1000000001;
  while(l+1<r) {
    ll c = (l+r)/2;
    int d = to_string(c).length();
    ll x = A*c + B*d;
    if (x <= X) l = c;
    else r = c;
  }
  cout << l << endl;
  return 0;
}
