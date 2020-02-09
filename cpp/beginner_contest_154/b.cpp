// https://atcoder.jp/contests/abc154/tasks/abc154_b

#include<iostream>
using namespace std;

int main() {
    string S;
    cin >> S;
    
    string s = "";
    for (int i = 0; i < S.length(); i++) {
        s += "x";
    }

    cout << s << endl;
    return 0;
}
