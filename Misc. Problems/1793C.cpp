#include <bits/stdc++.h>

#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int l = 0; int r = n - 1; int min = 1; int max = n; bool ans = false;
    while (l < r) {
        ans = true;
        if (a[l] == min) {
            min++;
            l++;
            ans = false;
        }

        else if (a[l] == max) {
            max--;
            l++;
            ans = false;
        }

        else if (a[r] == max) {
            max--;
            r--;
            ans = false;
        }

        else if (a[r] == min) {
            min++;
            r--;
            ans = false;
        }

        if (ans) {
            cout << l+1 << " " << r+1 << endl; return;
        }
    }

    if (l == r) {
        cout << -1 << endl;
    }
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
}