#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve() {
    int n, k; cin >> n >> k; 

    int ones = 0; int atLeast; int a[n];

    for (int i = 0 ; i < n; i++) {
        a[i] = 0;
    }

    for (int i = 1; i <= n; i++) {
        if (i % k == 0) {
            atLeast = i/k;
        }

        else {
            atLeast = i/k + 1;
        }

        int counter = 0;
        for (int j = 0 ; j < i ; j++) {
            if (a[j] == 1) {
                counter++;
            }
        }

        if (counter < atLeast) {
            if (i <= n/2) {
                a[i-1] = 1;
                a[n - i] = 1;            
            }

            else {
                a[min(i-1, n-i)] = 1;
            }
        }
    }

    for (int i = 0 ; i < n; i++) {
        if (a[i] == 1) {
            ones++;
        }
    }
    cout << ones << endl;
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}