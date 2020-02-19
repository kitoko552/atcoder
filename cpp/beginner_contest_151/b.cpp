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
  int N, K, M;
  cin >> N >> K >> M;
  int A[N-1];
  rep(i,N-1) cin >> A[i];

  int sum = 0;
  rep(i,N-1) sum += A[i];
  int ans = N*M - sum;
  if (ans < 0) ans = 0;
  if (ans > K) ans = -1;
  cout << ans << endl;
  return 0;
}
