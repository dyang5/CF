#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, m; cin >> n >> m;

    char grid[n][m];

    string s;

    for (int i = 0; i < n; i++) {
        cin >> s;
        for (int j = 0; j < m; j++) {
            grid[i][j] = s[j];
        }
    }

    bool ans = true;
    if (grid[0][0] != grid[n-1][m-1]) {

        ans = false;
        for (int j = 0; j < m - 1; j++) {
            if ((grid[0][j] != grid[0][j+1]) || (grid[n-1][j] != grid[n-1][j+1])) {
                ans = true;
            }
        }

        if (!ans) {
            cout << "NO" << endl; return;
        }

        ans = false;
        for (int i = 0; i < n - 1; i++) {
            if ((grid[i][0] != grid[i+1][0]) || (grid[i][m-1] != grid[i + 1][m-1])) {
                ans = true;
            }
        }

        if (!ans) {
            cout << "NO" << endl; return;
        }        
    }

    cout << "YES" << endl; return;


}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}