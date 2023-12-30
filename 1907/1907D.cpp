#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> l(n); vector<int> r(n);
    int minK = -1;
    int maxK = 1e9+5;

    for (int i = 0; i < n; i++) {
        cin >> l[i] >> r[i];
    }

    int lo = -1; int hi = 1e9 + 5;
    while (lo < hi - 1) {
        int mid = (lo + hi + 1)/2;

        int lRange = 0; int hRange = 0;
        bool success = true;
        for (int i = 0; i < n; i++) {
            if (lRange - mid > l[i]) {
                lRange = lRange - mid;
            }

            else {
                lRange = min(l[i], hRange + mid);
            }
            
            if (hRange + mid < r[i]) {
                hRange = hRange + mid;
            }

            else {
                hRange = min(r[i], hRange + mid);
            }

            if (hRange < l[i] || lRange > r[i] || hRange < lRange) {
                success = false;
                i = n;
            }
        }

        if (success) {
            if (hi == mid) {
                cout << hi << endl; return;
            }

            hi = mid;
        }

        else {
            lo = mid;
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