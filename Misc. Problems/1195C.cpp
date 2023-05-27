#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;

    if (n == 1) {
        int a, b; cin >> a >> b;
        cout << max(a, b) << endl; return 0;
    }

    int grid[2][n]; long long ans[2][n];

    for (int i = 0 ; i < n; i++) {
        cin >> grid[0][i];
    }

    for (int i = 0 ; i < n; i++) {
        cin >> grid[1][i];
    }

    ans[0][0] = grid[0][0]; 
    ans[1][0] = grid[1][0];

    for (int j = 1 ; j < n; j++) {
        for (int i = 0 ; i < 2; i++) {
            int idx = abs(1-i);
            ans[i][j] = max(grid[i][j] + ans[idx][j-1], ans[i][j-1]);
        }
    }

    cout << max(ans[0][n-1], ans[1][n-1]) << endl;
}