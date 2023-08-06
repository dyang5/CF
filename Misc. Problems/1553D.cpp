#include <iostream>
#include <vector>

using namespace std;

void solve() {
    string s, t; cin >> s >> t;

    int matched = 0;

    int sIdx = s.length() - 1; int tIdx = t.length() - 1;
    while (sIdx >= 0 && tIdx >= 0) {
        if (s[sIdx] == t[tIdx]) {
            sIdx--; tIdx--;
            matched++;
        }

        else {
            sIdx -= 2;
        }
    }

    if (matched == t.length()) {
        cout << "YES" << endl;
    }

    else {
        cout << "NO" << endl;
    }
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}