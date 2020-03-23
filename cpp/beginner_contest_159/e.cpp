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

map<int,int> sum;

int main() {
  int H, W, K;
  cin >> H >> W >> K;
  int S[H][W];
  rep(i,H)rep(j,W) {
    cin >> S[i][j];
    if (S[i][j] == 1) sum[i] += 1;
  }
  
  return 0;
}

