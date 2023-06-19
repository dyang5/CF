#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve() {
    string l, r; cin >> l >> r;

    int len1 = l.length(); int len2 = r.length();
    long long ans = 0;
    if (len1 < len2) {
        for (int i = 0 ; i < len2 - len1; i++) {
            l = "0" + l;
        }
    }

    int idx = 0; 
    
    while (l[idx] == r[idx] && idx < len1 - 1) {
        idx++;
    }

    ans += (r[idx] - l[idx]); idx++;

    for (int i = idx; i < len2; i++) {
        ans += 9;
    }

    cout << ans << endl; return;

}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}