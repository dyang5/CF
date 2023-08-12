#include <iostream>

using namespace std;

void solve() {
    string s; cin >> s; s = '0' + s;

    int sz = s.length(); int roundIndex = sz;

    for (int i = sz - 1; i >= 0; i--) {
        if (s[i] >= '5') {
            s[i - 1]++; roundIndex = i;
        }
    }

    int start = 0;

    if (s[0] == '0') {
        start = 1;
    }
    
    for (int i = start ; i < sz; i++) {
        if (i >= roundIndex) {
            cout << 0;
        }

        else {
            cout << s[i];
        }
    }
    
    cout << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
}