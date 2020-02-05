// https://atcoder.jp/contests/abc153/tasks/abc153_d

#include<iostream>
using namespace std;

long dfs(long h) {
    if (h == 1) {
        return 1;
    } else {
        return dfs(h / 2) * 2 + 1;
    }
}

int main() {
    long H;
    cin >> H;
    
    long sum = dfs(H);

    cout << sum << endl;
    
    return 0;
}
