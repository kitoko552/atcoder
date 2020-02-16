// https://atcoder.jp/contests/abc155/tasks/abc155_c

#include<iostream>
#include<cmath>
#include<vector>
#include<map>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
    int N;
    cin >> N;
    string *S = new string[N];
    rep(i,N) cin >> S[i];

    map<string, int> map;
    rep(i,N) {
        if (map.find(S[i]) == map.end()) map[S[i]] = 0;
        else map[S[i]] += 1;
    }

    int max = 0;
    vector<string> vec;
    for (auto i = map.begin(); i != map.end(); ++i) {
        if (max < i->second) {
            vec.clear();
            vec.push_back(i->first);
            max = i->second;
        } else if (max == i->second) {
            vec.push_back(i->first);
        }
    }

    sort(vec.begin(), vec.end());
    for (string s : vec) {
        cout << s << endl;
    }

    return 0;
}
