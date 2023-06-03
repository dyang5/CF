#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> a(n);

    for (int i = 0 ; i < n ; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    long long pre[n];

    pre[0] = a[0];

    for (int i = 1 ; i < n; i++) {
        pre[i] = pre[i-1] + a[i];
    }

    long long maxSum = -1;
    maxSum = pre[n - k - 1];

    for (int i = 1; i <= k; i++) {
        int maxDeleted = k - i;
        int minDeleted = 2 * i;

        maxSum = max(maxSum, pre[n - maxDeleted - 1] - pre[minDeleted - 1]);
    }

    cout << maxSum << endl;
}


int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}