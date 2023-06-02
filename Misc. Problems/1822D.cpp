#include <bits/stdc++.h>

#include <iostream>

using namespace std;

void solve() {
    int n; cin >> n;

    if (n == 1) {
        cout << 1 << endl; return;
    }

    else if (n % 2 == 0) {
        cout << n << " ";

        for (int i = 1; i <= (n-2)/2; i++) {
            cout << 2*i - 1 << " " << n - 2*i << " ";
        }

        cout << (n-1) << endl; return;
    }

    else {
        cout << -1 << endl; return;
    }
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        solve();
    }
}