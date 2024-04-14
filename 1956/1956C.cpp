#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve() {
    long long n; cin >> n;
    
    long long sum = 0;
    for (long long i = 1; i <= n; i++) {
        long long fac = 2 * i - 1;
        sum += fac * i;
    }

    cout << sum << " " << 2*n << endl;

    for (int i = 0; i < n; i++) {
        cout << 1 << " ";
        cout << n - i << " ";
        for (int j = 1; j <= n; j++) {
            cout << j << " ";
        }

        cout << endl;
        
        cout << 2 << " ";
        cout << n - i << " ";
        for (int j = 1; j <= n; j++) {
            cout << j << " ";
        }

        cout << endl;
    }

    
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}