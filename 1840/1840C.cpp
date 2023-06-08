#include <bits/stdc++.h>
#include <iostream>

using namespace std;

long long choose(int n, int k) {
    if (k == 0) return 1;
    return (n * choose(n - 1, k - 1)) / k;
}

void solve() {
    int n, k, q; cin >> n >> k >> q; long long ans = 0;

    int a[n]; vector<int> cont; int stretch = 0;
    for (int i = 0 ; i < n ; i++) {
        cin >> a[i];

        if (a[i] <= q) {
            stretch++;
        }

        if (a[i] > q) {
            cont.push_back(stretch);
            stretch = 0;
        }
    }

    if (stretch != 0) {
        cont.push_back(stretch);
    }

    for (int i = 0; i < cont.size(); i++) {
        // cout << cont[i] << " ";
        // cout << cont[i] << endl;
        if (cont[i] >= k) {
            for (int j = k; j <= cont[i]; j++) {
                ans += (cont[i] - j + 1);
            }
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