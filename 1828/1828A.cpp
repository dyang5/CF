#include <bits/stdc++.h>

#include <iostream>

using namespace std;

void solve() {
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << 2*i << " ";
    }

    cout << endl;
}
int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}