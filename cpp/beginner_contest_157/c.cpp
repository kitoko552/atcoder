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
  int N, M;
  cin >> N >> M;
  int s[M], c[M];
  rep(i,M) cin >> s[i] >> c[i];

  int res[N];
  rep(i,N) res[i] = -1;
  rep(i,M) {
    int n = res[s[i]-1];
    if (n == -1) {
      res[s[i]-1] = c[i];
    } else {
      if (n != c[i]) {
        cout << -1 << endl;
        return 0;
      }
    }
  }
  int ans = 0;
  if (res[0] == -1 && (N != 1 || M != 0)) res[0] = 1;
  rep(i,N) {
    if (res[i] == -1) continue;
    else ans += res[i] * pow(10,N-1-i);
  }
  int len = to_string(ans).size();
  if (len != N) {
    cout << -1 << endl;
    return 0;
  }
  cout << ans << endl;
  return 0;
}
