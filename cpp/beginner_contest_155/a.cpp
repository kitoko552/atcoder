// https://atcoder.jp/contests/abc155/tasks/abc155_a

#include<iostream>
#include<cmath>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    string ans = "No";
    if ((A == B && A != C) || (A == C && A != B) || (B == C && A != B)) {
        ans = "Yes";
    }
    
    cout << ans << endl;
    return 0;
}
