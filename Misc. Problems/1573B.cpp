#include <bits/stdc++.h>
#include <iostream>
#include <map>

using namespace std;

void solve() {
    int n; cin >> n;
    int a[n]; int b[n];
    
    map<int, int> d;
    for (int i = 0 ; i < n; i++) {
        cin >> a[i];
        d[a[i]] = i;
    }

    for (int i = 0 ; i < n; i++) {
        cin >> b[i];
        d[b[i]] = i;
    }    

    int tracker[n];
    tracker[n-1] = d[2*n];
    for (int i = n-2; i >= 0; i--) {
        tracker[i] = min(tracker[i+1], d[2*(i+1)]);
    }

    int ans = 2*n + 5; int val;
    for (int i = 0 ; i < n ; i++) {
        val = i + tracker[a[i]/2];

        if (val < ans) {
            ans = val;
        }
    }

    cout << ans << endl; 
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}