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
  char S[3];
  cin >> S;

  char c = S[0];
  string ans;
  if (c == S[1] && c == S[2]) ans = "No";
  else ans = "Yes";
  cout << ans << endl;
  return 0;
}
