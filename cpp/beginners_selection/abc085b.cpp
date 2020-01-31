// https://atcoder.jp/contests/abs/tasks/abc085_b

#include<iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    int d[n];
    for (int i=0; i<n; i++) {
        cin >> d[i];
    }

    vector<int> v(d, d + n);
    sort(v.begin(), v.end(), greater<>());
    v.erase(unique(v.begin(), v.end()), v.end());
    cout << v.size() << endl;
    return 0;
}
