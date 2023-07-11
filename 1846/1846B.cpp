#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s; char grid[3][3];

    for (int i = 0; i < 3; i++) {
        cin >> s;

        for (int j = 0; j < 3; j++) {
            grid[i][j] = s[j];
        }
    }

    if (grid[0][0] == grid[1][0] && grid[1][0] == grid[2][0]) {
        cout << grid[0][0] << endl; return;
    }

    else if (grid[0][1] == grid[1][1] && grid[1][1] == grid[2][1]) {
        cout << grid[0][1] << endl; return;
    }

    else if (grid[0][2] == grid[1][2] && grid[1][2] == grid[2][2]) {
        cout << grid[0][2] << endl; return;
    }

    else if (grid[0][0] == grid[0][1] && grid[0][1] == grid[0][2]) {
        cout << grid[0][0] << endl; return;
    }

    else if (grid[1][0] == grid[1][1] && grid[1][1] == grid[2][1]) {
        cout << grid[1][0] << endl; return;
    }

    else if (grid[2][0] == grid[2][1] && grid[2][1] == grid[2][2]) {
        cout << grid[2][0] << endl; return;
    }  

    else if (grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2]) {
        cout << grid[0][0] << endl; return;
    } 

    else if (grid[0][2] == grid[1][1] && grid[1][1] == grid[2][0]) {
        cout << grid[0][2] << endl; return;
    }

    else {
        cout << "DRAW" << endl; return;
    }

}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}