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

int N;

void dfs(string s, char mx){
  if(s.length() == N) {
    cout << s << endl;
  } else {
    for(char c='a'; c<=mx; c++){
      dfs(s + c, ((c == mx) ? (char)(mx + 1) : mx));
    }
  }
}

int main() {
  cin >> N;
  dfs("", 'a');
  return 0;
}
