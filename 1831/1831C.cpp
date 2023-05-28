#include <bits/stdc++.h>

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<vector<pair<int, int> > > adjList(n);

    int u, v;
    for (int i = 0; i < n - 1; i++) {
        cin >> u >> v;
        u -= 1;
        v -= 1;
        adjList[u].push_back(pair<int, int>(v, i));
        adjList[v].push_back(pair<int, int>(u, i));
    }

    int dist[n];
    vector<bool> visited(n);

    for (int i = 0; i < n; i++) {
        dist[i] = n + 1;
        visited[i] = false;
    }

    queue<pair<int,int> > q;
    int maxDist = -1;
    q.push(pair<int, int>(0, n + 1));
    visited[0] = true;

    dist[0] = 0;

    int level = 1;
    while (!q.empty()) {
        level = q.size();
        while (level != 0) {
            pair<int, int> t = q.front();
            int top = t.first; int prevOrder = t.second;
            q.pop(); level--;

            for (auto it = adjList[top].begin(); it != adjList[top].end();
                 it++) {
                int v = it->first;
                int order = it->second;

                if (!visited[v]) {
                    q.push(pair<int, int>(v, order));

                    if (order > prevOrder) {
                        dist[v] = min(dist[v], dist[top]);
                    }

                    dist[v] = min(dist[v], dist[top] + 1);
                    maxDist = max(dist[v], maxDist);
                    visited[v] = true;
                }
            }
        }
    }

    cout << maxDist << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
}