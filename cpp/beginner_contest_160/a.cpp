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

int main() {
  string S;
  cin >> S;

  if (S[2] == S[3] && S[4] == S[5]) cout<< "Yes" << endl;
  else cout<< "No" << endl;  
  return 0;
}

