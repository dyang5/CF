#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve() {
    int n; cin >> n;

    int truthers[n+1]; int val;

    for (int i = 0 ; i < n+1; i++) {
        truthers[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        cin >> val;
        for (int j = 0 ; j <= n - val; j++) {
            truthers[j]++;
        }
    }

    for (int i = 0 ; i < n+1; i++) {
        if (truthers[i] == i) {
            cout << n - i << endl; return;
        }
    }

    cout << -1 << endl;
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}