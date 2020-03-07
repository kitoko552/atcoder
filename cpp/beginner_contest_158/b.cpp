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
  ll N, A, B;
  cin >> N >> A >> B;

  if (A == 0) {
    cout << 0 << endl;
    return 0;
  }
  ll sum = A+B;
  ll x = (N / sum) * A;
  int a = N % sum;
  if (a >= A) x += A;
  else x += a;
  cout << x << endl;
  return 0;
}
