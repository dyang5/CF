#include <bits/stdc++.h>
#include <iostream>

using namespace std;

bool check(int n, int m) {
    if (n == m) {
        return true;
    } 

    else if (n % 3 == 0) {
        return check(n/3, m) || check(2*n/3, m);
    }

    else {
        return false;
    }
}


void solve() {
    int n, m; cin >> n >> m;

    if (check(n, m)) {
        cout << "YES" << endl;
    }

    else {
        cout << "NO" << endl;
    }


}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}