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
  int N;
  ll M;
  cin >> N >> M;
  vector<int> A(N);
  rep(i,N) cin >> A[i];

  sort(A.begin(), A.end());
  ll s[N+1];
  s[0] = 0;
  rep(i,N) {
    s[i+1] = s[i]+A[i];
    cout << s[i+1] << " ";
  }
  cout << endl;

  auto calc = [&](int x) {
    ll tot = 0, num = 0;
    rep(i,N) {
      int j = lower_bound(A.begin(), A.end(), x-A[i]) - A.begin();
      num += N-j;
      tot += s[N]-s[j];
      tot += A[i]*ll(N-j);
    }
    return make_pair(tot,num);
  };
 
  int l = 0, r = 200005;
  while (l+1<r) {
    int c = (l+r)>>1;
    auto p = calc(c);
    if (p.second >= M) l = c; else r = c;
    cout << "l=" << l << "," << "r=" << r << ": P=" << p.first << "," << p.second << endl;
  }
  auto p = calc(l);
  ll ans = p.first;
  cout << "ansP=" << p.first << "," << p.second << endl;
  ans -= (p.second-M)*l;
  cout << ans << endl;
  return 0;
}
