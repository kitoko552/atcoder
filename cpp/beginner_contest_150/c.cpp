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
  int N;
  cin >> N;
  int P[N], Q[N];
  rep(i,N) cin >> P[i];
  rep(i,N) cin >> Q[i];

  int pnum = 1;
  int qnum = 1;
  rep(i,N) {
    int p = 1;
    rep1(j,N-i) p *= j;
    int np = P[i]-1;
    int nq = Q[i]-1;
    rep(j,i) {
      if (P[j] < P[i]) np--;
      if (Q[j] < Q[i]) nq--;
    } 
    pnum += p * np;
    qnum += p * nq;
  }

  int ans = abs(pnum - qnum);
  cout << ans << endl;
  return 0;
}
