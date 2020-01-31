// https://atcoder.jp/contests/abs/tasks/abc087_b

#include<iostream>
using namespace std;

int main() {
    int a, b, c, x;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> x;

    int count = 0;
    for (int i=0; i < a+1; i++) {
        for (int j=0; j < b+1; j++) {
            for (int k=0; k < c+1; k++) {
                if (500*i + 100*j + 50*k == x) {
                    count++;
                }
            }   
        }
    }

    cout << count << endl;
    return 0;
}
