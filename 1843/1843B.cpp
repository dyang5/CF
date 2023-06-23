#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n); long long sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i]; sum += abs(a[i]);
    }

    int idx = 0;

    bool negative = false; int count = 0; 
    while (idx < n) {
        if (!negative && a[idx] < 0) {
            negative = true; count++;
        }

        if (negative && a[idx] > 0) {
            negative = false;
        }
        idx++;
    }

    cout << sum << " " << count << endl;
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}