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
  cin >> N;
  int a[N];
  rep(i,N) cin >> a[i];

  int brk = 0;
  int l = 1;
  rep(i,N) {
    if (l == a[i]) l++;
    else brk++;
  }
  int ans;
  if (l == 1) ans = -1;
  else ans = brk;
  cout << ans << endl;
  return 0;
}
