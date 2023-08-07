#include <iostream>

using namespace std;

void solve() {
    int n, k; cin >> n >> k;

    vector<int> a(n); int lo = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        lo = max(lo, a[i]);
    }

    int hi = lo + k;
    while (lo < hi) {
        int mid = (lo + hi + 1)/2;

        bool possible = false;

        for (int i = 0; i < n; i++) {

            long long minOperations = 0;

            for (int j = i; j < n; j++) {
                if (a[j] < mid - j + i) {
                    minOperations += mid - j + i - a[j];
                }

                else if (minOperations <= k) {
                    possible = true;
                    j = n;
                    i = n;
                }
            }

        }

        if (possible) {
            lo = mid;
        }

        else {
            hi = mid - 1;
        }


    }

    cout << lo << endl;
}

int main() {
    int T; cin >> T;

    while (T--) {
        solve();
    }
}