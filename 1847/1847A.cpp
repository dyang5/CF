#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> vals(n-1);
    for (int i = 0; i < n - 1 ; i++) {
        vals[i] = abs(a[i] - a[i+1]);
    }

    sort(vals.begin(), vals.end());

    long long sum = 0;
    for (int i = 0; i < n - k; i++) {
        sum += vals[i];
    }

    cout << sum << endl;
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}
