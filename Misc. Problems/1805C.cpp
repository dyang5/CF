#include <bits/stdc++.h>
#include <iostream>

#include <set>
using namespace std;

void solve() {
    int n, m; cin >> n >> m;

    vector<int> slopes(n); int val;
    for (int i = 0; i < n; i++) {
        cin >> slopes[i];
    }

    sort(slopes.begin(), slopes.end());

    for (int i = 0; i < m; i++) {
        long long a, b, c; cin >> a >> b >> c;
        int idx = lower_bound(slopes.begin(), slopes.end(), b) - slopes.begin(); bool done = false;

        if (idx < n && (b - slopes[idx]) * (b - slopes[idx]) < 4*a*c) {
            cout << "YES" << endl; cout << slopes[idx] << endl;
            done = true;
        }

        if (!done) {
            if (idx > 0 && (b - slopes[idx - 1]) * (b - slopes[idx - 1]) < 4*a*c) {
                cout << "YES" << endl; cout << slopes[idx - 1] << endl;
                done = true;
            }
        }
        
        if (!done) {
            cout << "NO" << endl;
        }
    }
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}