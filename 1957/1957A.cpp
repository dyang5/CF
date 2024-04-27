#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n+1);
    for (int i = 0; i < n; i++) {
        int val; cin >> val;
        a[val]++;
    }

    int count = 0;
    for (int i = 1; i <= n; i++) {
        count += a[i] / 3;
    }

    cout << count << endl;
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}