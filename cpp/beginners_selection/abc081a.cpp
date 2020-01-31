// https://atcoder.jp/contests/abs/tasks/abc081_a

#include<iostream>
using namespace std;

int ctoi(const char c){
  if('0' <= c && c <= '9') return (c-'0');
  return -1;
}

int main() {
    string s;
    cin >> s;

    int count = 0;
    for(char& c: s) {
        int n = ctoi(c);
        if (n == 1) {
            count++;
        }
    }

    cout << count << endl;
}
