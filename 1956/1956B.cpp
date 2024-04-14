#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);

    int val;
    for (int i = 0; i < n; i++) {
        cin >> val; val--;
        a[val]++;
    }

    int count = 0;
    for (int j = 0; j < n; j++) {
        if (a[j] >= 2) {
            count++;
        }
    }

    cout << count << endl;
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}