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

map<int, vector<int>> friends;
map<P, int> f_map;
map<P, int> b_map;
map<int, vector<int>> component;
map<int, int> indegree;

void count_comp(int i) {
  vector<int> done;
  map<int, int> d_map;
  queue<int> que;
  que.push(i);
  done.push_back(i);
  d_map[i] = 1;
  while(!que.empty()) {
    int person = que.front(); que.pop();
    for(int d : done) {
      if (b_map[P(d,person)] == 1) {
        indegree[person]++;
        indegree[d]++;
      }
    }
    for(int f : friends[person]) {
      indegree[person]++;
      if (d_map[f] != 1) {
        que.push(f);
        done.push_back(f);
        d_map[f] = 1;
      }
    }
  }
  for(int d : done) component[d] = done;
}

int main() {
  int N, M, K;
  cin >> N >> M >> K;
  int A[M], B[M];
  rep(i,M) {
    cin >> A[i] >> B[i];
    friends[A[i]].push_back(B[i]);
    friends[B[i]].push_back(A[i]);
    f_map[P(A[i],B[i])] = 1;
    f_map[P(B[i],A[i])] = 1;
  }
  int C[K], D[K];
  rep(i,K) {
    cin >> C[i] >> D[i];
    b_map[P(C[i],D[i])] = 1;
    b_map[P(D[i],C[i])] = 1;
  }

  rep1(i,N+1) {
    if (component[i].empty()) count_comp(i);
    cout << component[i].size()-indegree[i]-1 << " ";
  }
  cout << endl;
  return 0;
}

