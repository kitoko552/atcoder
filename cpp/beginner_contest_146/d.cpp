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

map<int, vector<int>> to;
map<int, int> in;
map<P,int> colors;

void dfs(int v) {
  int used_color = -1;
  if (in[v] > 0) used_color = colors[P(in[v], v)];
  int color = 1;
  for (int t : to[v]) {
    if (color == used_color) color++;
    colors[P(v,t)] = color;
    dfs(t);
    color++;
  }
}

int main() {
  int N;
  cin >> N;
  int al[N-1], bl[N-1];
  map<int, int> d;
  rep(i,N-1) {
    int a, b;
    cin >> a >> b;
    al[i] = a;
    bl[i] = b;
    to[a].push_back(b);
    in[b] = a;
    d[a] = d[a] + 1;
    d[b] = d[b] + 1;
  }
  dfs(1);
  int k = 0;
  for(auto dg : d) k = max(k, dg.second);
  cout << k << endl;
  rep(i,N-1) cout << colors[P(al[i], bl[i])] << endl;
  return 0;
}
