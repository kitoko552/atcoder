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
  string S;
  cin >> S;

  string r = S;
  reverse(r.begin(), r.end());
  int ans = 0;
  rep(i,S.size()) {
    if (S[i] != r[i]) {
      ans++;
    }
  }
  cout << ans/2 << endl;
  return 0;
}
