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
  string S;
  cin >> S;

  int ans = 0;
  if (S.size() > 2) {
    rep(i,S.size()-2) {
      if (S[i] == 'A' && S[i+1] == 'B' && S[i+2] == 'C') ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
