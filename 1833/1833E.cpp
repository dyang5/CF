#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <queue>

using namespace std;

void solve() {
    int n; cin >> n;
    
    vector<set<int> > adjList(n);

    for (int i = 0 ; i < n; i++) {
        int val; cin >> val; val -= 1;
        adjList[i].insert(val);
        adjList[val].insert(i);
    }

    vector<int> degree(n);

    for (int i = 0 ; i < n; i++) {
        degree[i] = adjList[i].size();
    }

    
    bool visited[n];

    for (int i = 0 ; i < n; i++) {
        visited[i] = false;
    }
 
    int bamboos = 0; int cycles = 0;

    for (int i = 0 ; i < n; i++) {
        if (!visited[i]) {
            queue<int> vertices;

            visited[i] = true;
            vertices.push(i);

            vector<int> component;
            component.push_back(i);

            while (!vertices.empty()) {
                int cur = vertices.front(); vertices.pop();

                for (auto &next : adjList[cur]) {
                    if (!visited[next]) {
                        visited[next] = true;
                        vertices.push(next);
                        component.push_back(next);
                    }
                }
            }

            bool bamboo = false;
            for (auto &j: component) {
                if (degree[j] == 1) {
                    bamboo = true;
                    break;
                }
            }

            if (bamboo) {
                bamboos++;
            }

            else {
                cycles++;
            }
        }
    }

    cout << min(bamboos, 1) + cycles << " " << bamboos + cycles << endl;
    
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}