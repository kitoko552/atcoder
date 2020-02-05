// https://atcoder.jp/contests/abc153/tasks/abc153_b

#include<iostream>
using namespace std;

int main() {
    int H, N;
    cin >> H >> N;

    int a[N];
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < N; i++) {
        H -= a[i];
        if (H <= 0) {
            break;
        }
    }

    if (H <= 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}
