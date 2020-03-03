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

int res[3][3];

int main() {
  int A[3][3];
  rep(i,3)rep(j,3) cin >> A[i][j];
  int N;
  cin >> N;
  int b[N];
  rep(i,N) cin >> b[i];

  if (N < 3) {
    cout << "No" << endl;
    return 0;
  }
  rep(i,N)rep(j,3)rep(k,3) {
    if (b[i] == A[j][k]) res[j][k] = 1;
  }
  if ((res[0][0] == 1 && res[1][1] == 1 && res[2][2] == 1) || (res[0][2] == 1 && res[1][1] == 1 && res[2][0] == 1)) {
    cout << "Yes" << endl;
    return 0;
  }
  rep(i,3) {
    if ((res[i][0] == 1 && res[i][1] == 1 && res[i][2] == 1) || (res[0][i] == 1 && res[1][i] == 1 && res[2][i] == 1)) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
