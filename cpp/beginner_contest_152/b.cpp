// https://atcoder.jp/contests/abc152/tasks/abc152_b

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

int main() {
  int a, b;
  cin >> a >> b;
  
  string ans = "";
  if (a <= b) {
    rep(i,b) ans += ('0' + a);
  } else {
    rep(i,a) ans += ('0' + b);
  }
  cout << ans << endl;
  return 0;
}
