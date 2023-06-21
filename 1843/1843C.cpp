#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve() {
    long long n; cin >> n;

    long long sum = 0;
    while (n > 0) {
        sum += n;
        n /= 2;
    }

    cout << sum << endl;
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}