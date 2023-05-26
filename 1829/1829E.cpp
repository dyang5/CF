#include <bits/stdc++.h>

#include <iostream>
#include <stack>
#include <utility>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    int grid[n][m];
    bool visited[n][m];

    int val;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];

            if (grid[i][j] == 0) {
                visited[i][j] = true;
            }

            else {
                visited[i][j] = false;
            }
        }
    }

    long long maxVol = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            stack<pair<int, int> > s;
            long long totalVol = 0;
            if (!visited[i][j]) {
                s.push(pair<int, int>(i, j));

                while (!s.empty()) {
                    pair<int, int> top = s.top();
                    s.pop();

                    int x = top.first;
                    int y = top.second;
                    if (!visited[x][y]) {
                        visited[x][y] = true;
                        totalVol += grid[x][y];
                    }

                    if (y + 1 < m && !visited[x][y + 1]) {
                        s.push(pair<int, int>(x, y + 1));
                    }

                    if (y - 1 >= 0 && !visited[x][y - 1]) {
                        s.push(pair<int, int>(x, y - 1));
                    }

                    if (x + 1 < n && !visited[x + 1][y]) {
                        s.push(pair<int, int>(x + 1, y));
                    }

                    if (x - 1 >= 0 && !visited[x - 1][y]) {
                        s.push(pair<int, int>(x - 1, y));
                    }
                }

                if (totalVol > maxVol) {
                    maxVol = totalVol;
                }
            }
        }
    }

    cout << maxVol << endl;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        solve();
    }
}