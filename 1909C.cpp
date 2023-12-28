#include <iostream>
#include <vector>
#include <set>

using namespace std;

void solve() {
    long long n; cin >> n; vector<long long> l(n); vector<long long> r(n);
    set<long long> rights; vector<long long> c(n); vector<long long> diff(n);

    for (long long i = 0 ; i < n; i++) {
        cin >> l[i];
    }

    for (long long i = 0 ; i < n; i++) {
        cin >> r[i];
        rights.insert(r[i]);
    }

    for (long long i = 0 ; i < n; i++) {
        cin >> c[i];
    }

    sort(l.rbegin(), l.rend());
    sort(c.rbegin(), c.rend());

    long long ans = 0;

    for (long long lIndex = 0; lIndex < n; lIndex++) {
        auto x = rights.upper_bound(l[lIndex]);
        diff[lIndex] = (*x) - l[lIndex];
        rights.erase(*x);
    }

    sort(diff.begin(), diff.end());

    for (long long i = 0; i < n; i++) {
        ans += diff[i] * c[i];
    }

    cout << ans << endl;
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}