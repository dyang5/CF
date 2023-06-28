#include <bits/stdc++.h>
#include <iostream>

using namespace std;
 
void solve() {
    int n, m; cin >> n >> m;
    vector<vector<int> > a(n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int val; cin >> val;
            a[i].push_back(val);
        }
    }

    long long ans = 0;
    for (int i = 0; i < m; i++) {
        vector<int> values;
        for (int j = 0; j < n; j++) {
            values.push_back(a[j][i]);
        }

        sort(values.begin(), values.end()); 

        long long pre_sum = 0;
        for (int k = 0; k < n; k++) {
            pre_sum += values[k];
            ans += abs(1LL * values[k] * (k+1) - 1LL * pre_sum);
        }

    }

    cout << ans << endl;
}
 
int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}