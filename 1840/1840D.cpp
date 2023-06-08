#include <bits/stdc++.h>

#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int lo = -1;
    int hi = 1e9 + 1;

    while (lo + 1 < hi) {
        int mid = (lo + hi)/2;
        int i = 0;
        while (i + 1 < a.size() && a[i + 1] - a[0] <= 2 * mid) {
            ++i;
        }
        int j = n - 1;
        while (j - 1 >= 0 && a.back() - a[j - 1] <= 2 * mid) {
            --j;
        }
        ++i;
        --j;
        if (i > j || a[j] - a[i] <= 2 * mid) {
            hi = mid;
        } else {
            lo = mid;
        }
    }

    cout << hi << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
}