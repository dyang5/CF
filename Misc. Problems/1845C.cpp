#include <iostream>

using namespace std;

void solve() {
    string s, l, r; int m; cin >> s >> m >> l >> r;

    int idx = 0;
    for (int i = 0; i < m; i++) {
        bool digits[10];

        int smallest = l[i] - '0'; int largest = r[i] - '0'; int remaining = largest - smallest + 1;
        for (int j = 0; j < 10; j++) {
            if (j < smallest || j > largest) {
                digits[j] = true;
            }

            else {
                digits[j] = false;
            }
        }

        while (idx < s.length() && remaining > 0) {
            if (digits[s[idx] - '0'] == false) {
                digits[s[idx] - '0'] = true;
                remaining--;
            }
            idx++;
        }

        if (idx == s.length() && (i != m - 1 || remaining > 0)) {
            cout << "YES" << endl; return;
        }
    }

    cout << "NO" << endl; return;
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}