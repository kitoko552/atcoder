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
  ll A, B, K;
  cin >> A >> B >> K;

  if (A >= K) {
    A -= K;
  } else {
    K -= A;
    A = 0;
    if (B >= K) B -= K;
    else B = 0;
  }

  cout << A << " " << B << endl;
  return 0;
}
