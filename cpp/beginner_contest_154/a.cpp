// https://atcoder.jp/contests/abc154/tasks/abc154_a

#include<iostream>
using namespace std;

int main() {
    string S, T, U;
    int A, B;
    cin >> S >> T;
    cin >> A >> B;
    cin >> U;
    
    int a, b;
    if (U == S) {
        a = A - 1;
        b = B;
    } else {
        a = A;
        b = B -1;
    }

    cout << a << " " << b << endl;
    return 0;
}
