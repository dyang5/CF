#include <bits/stdc++.h>

#include <iostream>

#include <map>

using namespace std;

const long long MOD = 1e9 + 7;
void solve() {
    int n; cin >> n;
    vector<int> a(n); vector<int> b(n); long long ans = 1;
    unordered_map<int, int> freqCount;

    for (int i = 0 ; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0 ; i < n; i++) {
        cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    int ap = 0, bp = 0; 

    while (ap < n && bp < n) {
        if ((a[ap] > b[bp]) && freqCount.find(b[bp]) == freqCount.end()) {
            freqCount[b[bp]] = n - ap;
            bp++;
        }

        else if (a[ap] > b[bp]) {
            bp++;
        }

        else if (a[ap] <= b[bp]) {
            ap++;
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        if (freqCount[b[i]] - (n-1-i) > 0) {
                    ans = (ans * (freqCount[b[i]] - (n-1-i))) % MOD;

        }

        else {
            cout << 0 << endl; return;
        }
    }

    cout << ans << endl; return;
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}