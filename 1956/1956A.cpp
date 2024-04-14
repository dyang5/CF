#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve() {
    int k, q; cin >> k >> q;
    vector<int> a(k); vector<int> b(q);

    for (int i = 0; i < k; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < q; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < q; i++) {
        if (b[i] < a[0]) {
            cout << b[i] << " ";
        }

        else {
            cout << a[0] - 1 << " ";
        }
    }

    cout << endl;
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}