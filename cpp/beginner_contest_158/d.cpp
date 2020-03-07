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
  int Q;
  cin >> S;
  cin >> Q;
  bool t = false;
  string pre = "";
  string app = "";
  rep(i,Q) {
    int T;
    cin >> T;
    if (T == 1) {
      t = !t;
    } else {
      int F;
      char C;
      cin >> F >> C;
      if (F == 1) {
        if (t) app = app + C;
        else pre = C + pre;
      } else {
        if (t) pre = C + pre;
        else app = app + C;
      }
    }
  }
  S = pre + S + app;
  if (t) reverse(S.begin(), S.end());
  cout << S << endl;
  return 0;
}
