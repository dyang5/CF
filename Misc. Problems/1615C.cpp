#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve() {
    int n; string a, b; cin >> n >> a >> b;

    int onesA = 0, onesB = 0; int diff = 0;
    int oneZero = 0, zeroOne = 0, oneOne = 0;
    int ans = INT_MAX;

    for (int i = 0 ; i < n; i++) {
        if ((a[i] - '0') == 1) {
            onesA++;
        }

        if (b[i] - '0' == 1) {
            onesB++;
        }

        if (a[i] - b[i] == 0 && a[i] == '1') {
            oneOne++;
        }

        else if (a[i] != b[i]) {
            diff++;

            if (a[i] - b[i] == 1) {
                oneZero++;
            }

            else {
                zeroOne++;
            }
        }
    }

    // even num operations
    if (onesA == onesB) {
        ans = min(ans, diff);
    }

    int onesA_copy;
    // 1-1
    if (oneOne > 0) {
        int diffCopy = n - diff - 1;
        onesA_copy = n - onesA + 1; 
        if (onesA_copy == onesB) {
            ans = min(ans, diffCopy + 1);
        }
    }

    // 1-0
    if (oneZero > 0) {
        int diffCopy = n + 1 - diff;
        onesA_copy = n + 1 - onesA;

        if (onesA_copy == onesB) {
            ans = min(ans, diffCopy + 1);
        }
    }

    if (ans == INT_MAX) {
        cout << -1 << endl; return;
    }

    cout << ans << endl; return;
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}