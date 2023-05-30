#include <bits/stdc++.h>

#include <iostream>

using namespace std;

void solve() {
    int n; cin >> n;
    int arr[n];

    for (int i = 0 ; i < n; i++) {
        cin >> arr[i];
    }

    int val;

    int ans = -1;
    for (int i = 0 ; i < n; i++) {
        val = arr[i]; val -= 1;

        if (ans == -1 && val - i != 0) {
            ans = val -i;
        }

        if (val - i != 0) {
            ans = gcd(ans, val - i);
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