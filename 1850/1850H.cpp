#include <iostream>
#include <vector>

using namespace std;

const long long maxN = 2e5 + 5;
vector<pair<long long, long long> > adjList[maxN];
long long value[maxN], visited[maxN];

void dfs(int u) {
    visited[u] = true;

    for (auto x: adjList[u]) {
        int v = x.first; int d = x.second;

        if (!visited[v]) {
            value[v] = d + value[u];
            dfs(v);
        }
    }
}

void solve() {
    int n, m; cin >> n >> m;

    for (int i = 0; i < n; i++) {
        adjList[i].clear(); 
        visited[i] = false; value[i] = 0;
    }

    vector<vector<int> > conditions;

    for (int i = 0; i < m; i++) {
        int a, b, d; cin >> a >> b >> d;
        a--; b--;

        adjList[a].push_back(make_pair(b, d));
        adjList[b].push_back(make_pair(a, -d));

        vector<int> c(3);
        c[0] = a; c[1] = b; c[2] = d;
        conditions.push_back(c);
    }

    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            dfs(i);
        }
    }

    for (int i = 0; i < m; i++) {
        long long a = conditions[i][0];
        long long b = conditions[i][1];
        long long d = conditions[i][2];
        if (value[a] + d != value[b]) {
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