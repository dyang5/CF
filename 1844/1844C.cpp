#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

void solve() {
    int n; cin >> n;

    vector<long long> a(n);

    bool allNegative = true; long long maxVal = LLONG_MIN;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] >= 0) {
            allNegative = false;
        }

        maxVal = max(maxVal, a[i]);
    }

    if (allNegative) {
        cout << maxVal << endl;
    }

    else {
        long long ans1 = 0, ans2 = 0;

        for (int i = 0; i < n; i++) {
            if (i % 2 == 1) {
                ans1 += max(a[i], 1LL * 0);
            }

            else {
                ans2 += max(a[i], 1LL * 0);
            }
        }

        cout << max(ans1, ans2) << endl;
    }
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}