#include <iostream>
#include <vector>
#include <set>

using namespace std;

void solve() {
    int n, k, d; cin >> n >> k >> d;
    vector<int> a(n); vector<int> v(k);

    int ans = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < k; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < min(2*n, d); i++) {
        int matches = 0;

        for (int k = 0; k < n; k++) {
            if (a[k] == k + 1) {
                matches++;
            }
        }

        ans = max(ans, (d-1-i)/2 + matches);

        for (int j = 0; j < v[i % k]; j++) {
            a[j]++;
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