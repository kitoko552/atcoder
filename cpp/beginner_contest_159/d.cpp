#include<iostream>
#include<cstdio>
#include<iomanip>
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

map<ll,ll> nc;

int main() {
  ll N;
  cin >> N;
  int A[N];
  rep(i,N) {
    cin >> A[i];
    nc[A[i]] += 1;
  }

  ll all = 0;
  for(auto c : nc) {
    if (c.second < 2) continue;
    all += c.second*(c.second-1)/2;
  }
  rep(i,N) cout << all-(nc[A[i]]-1) << endl;
  return 0;
}

