#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve() {
    int n; cin >> n;
    
    vector<vector<int>> adjList(n, vector<int>());

    for (int i = 0 ; i < n; i++) {
        int val; cin >> val;
        adjList[i].push_back(val - 1);
    }
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}