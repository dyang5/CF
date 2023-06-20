#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve() {
    int n; cin >> n;
    int a[n];

    long long negativeSum = 0; long long positiveSum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] < 0) {
            negativeSum += a[i];
        }

        else {
            positiveSum += a[i];
        }
    }

    cout << abs(abs(negativeSum) - abs(positiveSum)) << endl;
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}