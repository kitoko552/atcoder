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
  int N, M, K;
  cin >> N >> M >> K;
  int A[M], B[M];
  rep(i,M) cin >> A[i] >> B[i];
  int C[K], D[K];
  rep(i,K) cin >> C[i] >> D[i];

  int con[N];
  rep(i,N) con[i] = 0;
  rep(i,M) {
    
  }
  cout << ans << endl;
  return 0;
}

