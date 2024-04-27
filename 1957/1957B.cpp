#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve() {
    long long n, k; cin >> n >> k;
    
    int index = 0; long long num = 0;
    while (index < 31) {
        if ((1 << index) <= k) {
            k = k - (1 << index);
            num = num + (1 << index);
        }
        index++;
    }

    if (n == 1) {
        num += k;
    }

    cout << num << " ";
    for (int i = 1; i < n; i++) {
        if (i == 1) {
            cout << k << " ";
        }
        else {
            cout << 0 << " ";
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