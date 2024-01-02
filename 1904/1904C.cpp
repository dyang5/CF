#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

void solve() {
    int n, k; cin >> n >> k;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (k >= 3) {
        cout << 0 << endl; return;
    }

    sort(a.begin(), a.end());

    vector<long long> differences;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            differences.push_back(abs(a[i] - a[j]));
        }
    }

    sort(differences.begin(), differences.end());
    long long ans = min(a[0], differences[0]);

    if (k == 1) {
        cout << ans << endl; return;
    }

    for (int i = 0; i < n; i++) {
        long long val = a[i];
        int lower = lower_bound(differences.begin(), differences.end(), val) - differences.begin();

        if (lower < differences.size()) {
            ans = min(abs(val - differences[lower]), ans); 
        }

        if (lower > 0) {
            ans = min(abs(val - differences[lower-1]), ans); 
        }
    }

    cout << ans << endl; return;

    
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}