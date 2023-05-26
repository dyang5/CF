#include <bits/stdc++.h>

#include <iostream>
#include <set>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<set<int> > adjList(n);

    int u, v;
    for (int i = 0; i < m; i++) {
        cin >> u >> v;
        u -= 1;
        v -= 1;
        adjList[u].insert(v);
        adjList[v].insert(u);
    }

    unordered_map<int, int> degrees;

    for (int i = 0; i < n; i++) {
        degrees[adjList[i].size()]++;
    }

    int x, y;

    if (degrees.size() == 3) {
        for (auto const& it : degrees) {
            if (it.first != 1) {
                if (it.second == 1) {
                    x = it.first;
                }

                else {
                    y = it.first - 1;
                }
            }
        }
    }

    else {
        int product = degrees[1];
        for (auto const& it : degrees) {
            if (it.first != 1) {
                x = it.first;
            }
            y = x - 1;
        }
    }

    cout << x << " " << y << endl;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        solve();
    }
}