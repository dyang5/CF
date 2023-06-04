#include <bits/stdc++.h>
#include <iostream>

#include <map>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n), b(n);

    unordered_map<int, vector<int> > lamps;
    for (int i = 0 ; i < n; i++) {
        cin >> a[i]; cin >> b[i];
        lamps[a[i]].push_back(b[i]);
    }

    long long maxPts = 0;
    for (int i = 1; i <= n; i++) {
        sort(lamps[i].begin(), lamps[i].end(), greater<int>());
        for (int j = 0 ; j < min((int) lamps[i].size(), i); j++) {
            maxPts += lamps[i][j];
        }
    }

    cout << maxPts << endl;

}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}