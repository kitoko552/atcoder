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
  int K, N;
  cin >> K >> N;
  int A[N];
  int d[N-1];
  int md = 0;
  rep(i,N) {
    cin >> A[i];
    if(i > 0) {
      d[i-1] = A[i] - A[i-1];
      md = max(md, d[i-1]);
      if (i == N-1) {
        d[i] = K + A[0] - A[i];
        md = max(md, d[i]);
      }
    }
  }

  cout<< K-md << endl;
  return 0;
}

