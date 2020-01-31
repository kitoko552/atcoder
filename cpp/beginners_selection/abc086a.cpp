// https://atcoder.jp/contests/abs/tasks/abc086_a

#include<iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    string s = (a*b % 2 == 0) ? "Even" : "Odd";
    cout << s << endl;
    return 0;
}