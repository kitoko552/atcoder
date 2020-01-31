// https://atcoder.jp/contests/abs/tasks/abc081_b

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }

    int count = -1;
    bool canDivide = true;
    while(canDivide) {
        count++;
        for (int i=0; i<n; i++) {
            if (a[i] % 2 == 0) {
                a[i] = a[i]/2;
            } else {
                canDivide = false;
                break;
            }
        }
    }

    cout << count << endl;
    return 0;
}
