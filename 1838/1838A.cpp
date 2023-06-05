#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve() {
    int n; cin >> n;

    int ans = -1; bool done = false;
    for (int i = 0 ; i < n; i++) {
        int val; cin >> val;

        if (val < 0 && !done) {
            ans = val;
            done = true;
        }

        if (!done) {
            ans = max(ans, val);
        }
    }

    cout << ans << endl;
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}