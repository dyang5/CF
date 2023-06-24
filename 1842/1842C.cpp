#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;

    // code from Yam on Discord (juliany2 codeforces)
    vector<int> a(n + 1), dp(n + 1), bst(n + 1, 1e9);
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        dp[i] = min(dp[i - 1] + 1, bst[a[i]]);
        bst[a[i]] = min(bst[a[i]], dp[i - 1]);
    }

    cout << n - dp[n] << '\n';

    for (int i = 0; i < n+1; i++) {
        cout << bst[i] << " ";
    }
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}