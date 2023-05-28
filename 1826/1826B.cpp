#include <bits/stdc++.h>

#include <algorithm>
#include <iostream>
#include <set>

using namespace std;

void solve() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    set<int> differences;
    for (int i = 0; i < n / 2; i++) {
        int val = abs(arr[i] - arr[n - i - 1]);
        if (val != 0) {
            differences.insert(val);
        }
    }

    if (differences.size() == 0) {
        cout << 0 << endl;
        return;
    }

    else if (differences.size() == 1) {
        for (auto it = differences.begin(); it != differences.end(); it++) {
            cout << *it << endl;
            return;
        }
    }

    else {
        int ans = *differences.begin();
        auto it = differences.begin();
        for (int i = 0; i < differences.size(); i++) {
            ans = gcd(ans, *it);
            it++;
        }
        cout << ans << endl;
    }
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
}
