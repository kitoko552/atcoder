// https://atcoder.jp/contests/abc152/tasks/abc152_d

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

int c[10][10];

int main() {
  int N;
  cin >> N;

  for(int i=1; i<=N; i++) {
    // 先頭の桁の数は a に等しく、末尾の桁の数は b に等しい
    int a, b;
    string s = to_string(i);
    a = s[0]-'0';
    b = s[s.length()-1]-'0';
    c[a][b] += 1;
  }

  int ans = 0;
  for(int i=1; i<10; i++)for(int j=1; j<10; j++) ans += c[i][j]*c[j][i];
  cout << ans << endl;
  return 0;
}
