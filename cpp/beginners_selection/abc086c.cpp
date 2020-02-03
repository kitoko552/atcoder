// https://atcoder.jp/contests/abs/tasks/abc085_c

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int t[n+1], x[n+1], y[n+1];
    t[0] = 0;
    x[0] = 0;
    y[0] = 0;
    for (int i=1; i<=n; i++) {
        cin >> t[i] >> x[i] >> y[i];
    }

    bool available = true;
    for (int i=1; i<=n; i++) {
        int dt = t[i] - t[i-1];
        int d = abs((x[i]+y[i]) - (x[i-1]+y[i-1]));

        if (dt < d) {
            available = false;
            break;
        }

        int dtr = dt % 2;
        int dr = d % 2;
        if ((dtr == 0 && dr == 0) || (dtr == 1 && dr == 1)) {
            continue;
        } else {
            available = false;
            break;
        }
    }

    string res = available ? "Yes" : "No";
    cout << res << endl;
    return 0;
}
