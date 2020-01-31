// https://atcoder.jp/contests/abs/tasks/abc085_c

#include<iostream>
using namespace std;

int main() {
    int n, y;
    cin >> n >> y;

    for (int i=0; i<n+1; i++) {
        for (int j=0; j<n+1-i; j++) {
            int k = n - (i+j);
            if (10000*k + 5000*j + 1000*i == y) {
                cout << k << " " << j << " " << i << endl;
                return 0;
            }
        }
    }

    cout << "-1 -1 -1" << endl;
    return 0;
}
