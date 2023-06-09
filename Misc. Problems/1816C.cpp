#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (n % 2 == 1) {
        cout << "YES" << endl; return;
    }

    long long oddSum = 0;
    for (int i = 0; i <= n-2; i += 2) {
        oddSum += a[i+1] - a[i];
    }

    if (oddSum >= 0) {
        cout << "YES" << endl; return;
    }

    cout << "NO" << endl; return;
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}