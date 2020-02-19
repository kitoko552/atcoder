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
  int N, M;
  cin >> N >> M;
  int p[M];
  string S[M];
  rep(i,M) cin >> p[i] >> S[i];

  int ac = 0, pn = 0;
  map<int, bool> ac_mp;
  map<int, int> wa_mp;
  rep(i,M) {
    ac_mp[p[i]] = false;
    wa_mp[p[i]] = 0;
  }
  rep(i,M) {
    if (ac_mp[p[i]]) {
      continue;
    }

    if (S[i] == "AC") {
      ac++;
      ac_mp[p[i]] = true;
      pn += wa_mp[p[i]];
    } else {
      wa_mp[p[i]] += 1;
    }
  }
  
  cout << ac << " " << pn << endl;
  return 0;
}
