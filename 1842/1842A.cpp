#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve() {
    int n, m; cin >> n >> m;

    long long A = 0; long long B = 0; long long val;
    for (int i = 0 ; i < n; i++) {
        cin >> val; A += val;
    }

    for (int i = 0 ; i < m; i++) {
        cin >> val; B += val;
    }

    if (A == B) {
        cout << "Draw" << endl;
    }

    else if (A > B) {
        cout << "Tsondu" << endl;
    }

    else {
        cout << "Tenzing" << endl;
    }

}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}