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

string list[7] = {"SUN","MON","TUE","WED","THU","FRI","SAT"};

int main() {
  string S;
  cin >> S;

  int index;
  rep(i,7) {
    if(list[i] == S) {
      index = i;
      break;
    }
  }
  cout << 7-index << endl;
  return 0;
}
