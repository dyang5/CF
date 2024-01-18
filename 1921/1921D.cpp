#include <iostream>
#include <vector>
#include <set>

using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    vector<long long> a(n); vector<long long> b(m);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    long long ans = 0;
    
    long long tracker = 0;
    for (int i = 0; i < n; i++) {
        tracker += abs(a[i] - b[m - 1 - i]);
    }

    ans = tracker;
    for (int i = n - 1; i >= 0; i--) {
        tracker += abs(b[n - 1 - i] - a[i]) - abs(a[i] - b[m - 1 - i]);
        ans = max(ans, tracker);
    }

    cout << ans << endl;
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}