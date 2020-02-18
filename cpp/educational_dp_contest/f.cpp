// https://atcoder.jp/contests/dp/tasks/dp_e

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

string dp[3001][3001];

int main() {
  string s, t;
  cin >> s;
  cin >> t;
  
  // dp[i][j] := s[1]~s[i]とt[1]~t[j]に対する部分文字列
  int length_s = s.length();
  int length_t = t.length();

  // string dp[length_s+1][length_t+1];
  // rep(i,length_s+1)rep(j,length_t+1) dp[i][j] = "";

  rep(i,length_s)rep(j,length_t) {
    if (s[i] == t[j]) {
      dp[i+1][j+1] = dp[i][j] + s[i]; 
    } else {
      if (dp[i][j+1].length() < dp[i+1][j].length()) dp[i+1][j+1] = dp[i+1][j];
      else dp[i+1][j+1] = dp[i][j+1];
    }
  }
  
  cout << dp[length_s][length_t] << endl;
  return 0;
}
