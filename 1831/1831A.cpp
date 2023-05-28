#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve() {
    int n; cin >> n; int arr[n]; int ans[n];

    for (int i = 0 ; i < n; i++) {
        cin >> arr[i];
        ans[i] = n + 1 - arr[i];
    }

    for (int i = 0 ; i < n; i++) {
        cout << ans[i] << " ";
    }

    cout << endl;
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}