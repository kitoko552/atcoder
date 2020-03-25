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

int H, W, K;
// string S[10];
char S[10][1000];
// int S[10][1000];

int cut_vertical(int top, int bottom) {
  int ans = 0;
  int numw = 0;
  int w = 0;
  while(w<W) {
    for(int h=top; h<bottom; h++) {
      int n = S[h][w]-'0';
      if(n == 1) numw++;
    }
    if(numw >= K) {
      while(numw >= K) {
        ans++;
        numw -= K;
      }
    }
    w++;
  }
  return ans;
}

int main() {
  cin >> H >> W >> K;
  rep(i,H)rep(j,W) cin >> S[i][j];  

  // int ans = cut_vertical(0,H);
  // cout << ans << endl;

  int ans = 0;
  // 横の割り方全通りに対して縦の割り方を貪欲法で求める
  // どうやって横の割り方全通りを表現するか

  return 0;
}

