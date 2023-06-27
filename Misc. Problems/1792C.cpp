#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve() {
        int n; cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int lo = 0; int hi = n/2; bool fail = false;

        while (lo < hi) {
            int mid = (lo + hi)/2;

            int last = 0;
            for (int i = 0; i < n; i++) {
                if (a[i] <= mid || a[i] + mid >= n + 1) {
                    continue;
                }
                if (a[i] < last) {
                    i = n;
                    fail = true;
                }
                last = a[i];
            }

            if (fail) {
                lo = mid + 1;
                fail = false;
            }

            else {
                hi = mid;
            }
        }

        cout << hi << endl;

}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}