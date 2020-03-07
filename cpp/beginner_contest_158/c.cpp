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
  int A, B;
  cin >> A >> B;

  vector<int> av;
  int a = 1;
  int ax = a*8/100;
  while(ax <= A) {
    if (ax == A) av.push_back(a);
    a++;
    ax = a*8/100;
  }
  vector<int> bv;
  int b = 1;
  int bx = b*10/100;
  while(bx <= B) {
    if (bx == B) bv.push_back(b);
    b++;
    bx = b*10/100;
  }
  int ans = INF;
  for (int a : av) {
    for (int b : bv) {
      if (a == b) {
        ans = min(ans, a);
      }
    }
  }
  if (ans == INF) ans = -1;
  cout << ans << endl;
  return 0;
}
