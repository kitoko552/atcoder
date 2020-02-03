// https://atcoder.jp/contests/abs/tasks/arc065_a

#include<iostream>
using namespace std;

bool ends_with(const string& s, const string& suffix) {
   if (s.size() < suffix.size()) return false;
   return equal(rbegin(suffix), rend(suffix), rbegin(s));
}

int main() {
    string s;
    cin >> s;

    string words[4] = {"dream", "dreamer", "erase", "eraser"};
    bool found = false;
    int i = 0;
    while (i < 4 && !found) {
        string word = words[i];
        if (ends_with(s, word)) {
            s = s.erase(s.size() - word.size());
            if (s.empty()) {
                found = true;
            } else {
                i = 0;
            }
        } else {
            i++;
        }
    }

    string res = found ? "YES" : "NO";
    cout << res << endl;
    return 0;
}
