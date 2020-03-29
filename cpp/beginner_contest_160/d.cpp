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

int ans[2*1000];

int main() {
  int N, X, Y;
  cin >> N >> X >> Y;

  ans[0] = N;
  int a_all = N-(Y-X-1)-1;
  for(int i=2; i<=a_all; i++) {
    ans[i-1] += a_all-i+1;
  }

  int b_all = N-(N-Y+1)-1;
  for(int i=2; i<=b_all; i++) {
    ans[i-1] += b_all-i+1;
  }

  int c_all = N-X-1;
  for(int i=2; i<=c_all; i++) {
    ans[i-1] += c_all-i+1;
  }
  rep(i,N-1) cout << ans[i] << endl;
  return 0;
}

