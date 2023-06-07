#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve() {
    int n, k; cin >> n >> k;

    long long possible = 1;

    if (k >= 30) {
        cout << (n+1) << endl; return;
    }

    for (int i = 0 ; i < k; i++) {
        possible *= 2;
    }

    cout << min(1LL * (n+1), possible) << endl;
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}