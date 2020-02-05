// https://atcoder.jp/contests/abc153/tasks/abc153_a

#include<iostream>
using namespace std;

int main() {
    int H, A;
    cin >> H >> A;
    
    int count = 0;
    while (H > 0) {
        H -= A;
        count++;
    }

    cout << count << endl;
    return 0;
}
