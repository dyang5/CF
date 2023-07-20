#include <iostream>

using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        int lo = 0; int hi = i;

        while (lo < hi) {
            int mid = (lo + hi)/2;
            if (a[mid] >= i + 1 - mid) {
                hi = mid;
            }

            else {
                lo = mid + 1;
            }
        }

        cout << i - lo + 1 << " ";
    }

    cout << endl;
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}
