#include<iostream>
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

using route = pair<P, int>;

int main() {
  int H, W;
  cin >> H >> W;
  char S[H][W];
  rep(i,H)rep(j,W) cin >> S[i][j];

  int ans = 0;
  rep(i,H)rep(j,W) {
    if (S[i][j] == '#') continue;
    P sp = P(i,j);
    queue<route> q;
    q.push(route(sp, 0));
    map<P, bool> visited;
    int steps = 0;
    while (!q.empty()) {
      route r = q.front();
      q.pop();
      P p = r.first;
      if (p.first < 0 || p.first >= H || p.second < 0 || p.second >= W) continue;
      if (S[p.first][p.second] == '#' || visited[p] == true) continue;
      visited[p] = true;
      steps = max(steps, r.second);
      q.push(route(P(p.first+1, p.second), r.second+1));
      q.push(route(P(p.first-1, p.second), r.second+1));
      q.push(route(P(p.first, p.second+1), r.second+1));
      q.push(route(P(p.first, p.second-1), r.second+1));
    }
    ans = max(ans, steps);
  }

  cout << ans << endl;
  return 0;
}
