#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve() {
    int n; cin >> n;
    if (n == 1) {
        cout << 1 << endl; return;
    }

    else if (n % 2 == 1) {
        cout << -1 << endl; return;
    }

    else {
        vector<int> ans(n);

        for (int i = 0; i < n; i += 2) {
            ans[i] = n - 1 - i;
        }

        for (int i = 1; i < n; i += 2) {
            ans[i] = n + 1 - i;
        }

        for (int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }

        cout << endl; return;
    }

}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}