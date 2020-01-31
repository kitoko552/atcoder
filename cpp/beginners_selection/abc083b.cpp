// https://atcoder.jp/contests/abs/tasks/abc083_b

#include<iostream>
using namespace std;

int ctoi(const char c){
  if('0' <= c && c <= '9') return (c-'0');
  return -1;
}

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        int num = 0;
        string s = to_string(i);
        for(char& c: s) {
            num += ctoi(c);
        }
        if (a <= num && num <= b) {
            sum += i;
        }
    }

    cout << sum << endl;
    return 0;
}
