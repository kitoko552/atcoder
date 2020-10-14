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
  ll X;
  cin >> X;

  ll ans = 0;
  ll a = X / 500;
  X -= 500*a;
  ans += 1000*a;
  ll b = X / 5;
  X -= 5*b;
  ans += 5*b;
  cout<< ans << endl;
  return 0;
}

