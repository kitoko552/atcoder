#include<iostream>
#include <algorithm>
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
  ll N;
  int K;
  cin >> N >> K;

  int ans = 1;
  ll k = K;
  while(k<=N) {
    k *= K;
    ans++;
  }

  cout << ans << endl;
  return 0;
}
