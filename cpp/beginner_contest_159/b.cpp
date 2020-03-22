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

  int N = S.length();
  rep(i,(N-1)/2-1) {
    if (S[i] != S[(N-1)/2-1-i]) {
      cout<< "No" << endl;
      return 0;
    }
  }
  for(int i = (N+3)/2; i<N; i++) {
    if (S[i] != S[N-1-i]) {
      cout<< "No" << endl;
      return 0;
    }
  }
  cout<< "Yes" << endl;
  return 0;
}

