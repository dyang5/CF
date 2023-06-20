#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve() {
    double n; cin >> n;

    if (n == 1) {
        cout << 1 << endl;
        cout << "1 2 " << endl; return;
    }

    cout << ceil(n/2) << endl; 
    for (int i = 0; i < ceil(n/2); i++) {
        cout << 2 + 3*i << " " << 3*n - 3*i << endl;
    }


}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}