#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, k; cin >> n >> k;

    vector<int> a(n);
    vector<int> count(100);
    for (int i = 0; i < n; i++) {
        cin >> a[i]; a[i]--;
        count[a[i]]++;
    }

    sort(count.rbegin(), count.rend());

    if (count[0] >= k) {
        cout << k - 1 << endl; return;
    }

    else {
        cout << n << endl;
    }
    

}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}