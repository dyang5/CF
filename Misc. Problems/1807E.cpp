#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void printGuess(int a, int b) {
    cout << "? " << b - a + 1 << " ";
    for (int i = a; i <= b; i++) {
        cout << i << " ";
    }

    cout << endl;
}

void solve() {
    int n; cin >> n;
    long long val;

    vector<int> a(n+1); long long pre[n+1]; pre[0] = 0;
    for (int i = 1 ; i < n + 1; i++) {
        cin >> a[i];
        pre[i] = a[i];

        if (i > 1) {
            pre[i] += pre[i-1];
        }
    }

    if (n == 1) {
        cout << "! 1" << endl; return;
    }    

    int lo = 1; int hi = n; 

    while (lo < hi) {   
        int mid = (lo + hi)/2;
        printGuess(lo, mid);

        cin >> val;
        if (val == pre[mid] - pre[lo - 1]) {
            lo = mid + 1;
        }

        else {
            hi = mid;
        }
    }

    cout << "! " << lo << endl;

}

int main() {
    int T; cin >> T; 
    while (T--) {
        solve();
    }
}