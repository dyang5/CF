#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve() {
    int n, m; cin >> n >> m;

    if (m == 1) {
        cout << "YES" << endl; return;
    }

    if (n == 1) {
        cout << "YES" << endl; return;
    }
    
    if (m >= n) {
        cout << "NO" << endl; return;
    }



    for (int i = 2 ; i <= sqrt(n) ; i++) {
        if (i > m) {
            break;
        }

        if (n % i == 0) {
            cout << "NO" << endl; return;
        }
    }
    cout << "YES" << endl; return;
}

int main() {
    int T; cin >> T; 

    while (T--) {
        solve();
    }
}