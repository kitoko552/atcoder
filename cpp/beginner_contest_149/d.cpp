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
  int N, K, R, S, P;
  string T;
  cin >> N >> K;
  cin >> R >> S >> P;
  cin >> T;

  char at[N];
  rep(i,N) at[i] = ' ';
  ll ans = 0;
  rep(i,N) {
    char now = T[i];
    char prev = ' ';
    char next = ' ';
    if (i >= K) prev = at[i-K];
    if (i+K < N) next = T[i+K];
    if (now == 'r') {
      if (prev == 'p') {
       if (next == 'p') {
          at[i] = 'r';
        } else {
          at[i] = next;
        }
      } else {
        at[i] = 'p';
        ans += P;
      }
    } else if (now == 's') {
      if (prev == 'r') {
       if (next == 'r') {
          at[i] = 's';
        } else {
          at[i] = next;
        }
      } else {
        at[i] = 'r';
        ans += R;
      }
    } else if (now == 'p') {
      if (prev == 's') {
       if (next == 's') {
          at[i] = 'p';
        } else {
          at[i] = next;
        }
      } else {
        at[i] = 's';
        ans += S;
      }
    }
  }

  cout << ans << endl;
  return 0;
}
