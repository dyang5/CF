#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve() {
    int n; cin >> n;
    
    int b[n];

    for (int i = 0 ; i < n; i++) {
        cin >> b[i];
    }

    if (b[n-1] == 1) {
        cout << "NO" << endl; return;
    }

    int idx = n-1;

    cout << "YES" << endl;

    while (idx >= 0) {
        if (idx == 0 || b[idx - 1] == 0) {
            cout << "0 ";
            idx--;
        }

        else {
            int j = idx - 1; int ones = 0;
            while (j >= 0 && b[j] == 1) {
                ones++; j--;
            }

            for (int i = 0 ; i < ones; i++) {
                cout << "0 ";
            }
            cout << ones << " ";
            idx = j;
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