#include <bits/stdc++.h>

#include <iostream>

using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    int ans[n][m];

    for (int i = 1; i <= n/2; i++) {
        for (int j = 1; j <= m; j++) {
            ans[2*i - 1][j - 1] = (i - 1) * m + j;
        }
    }

    for (int i = n/2 + 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            ans[2*(i - n/2 - 1)][j - 1] = (i - 1) * m + j;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << ans[i][j] << " ";
        }

        cout << endl;
    }


}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}