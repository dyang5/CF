#include <bits/stdc++.h>
#include <iostream>

using namespace std;
void solve() {
    int n; cin >> n;

    if (n <= 4) {
        cout << "Bob" << endl; return;
    }
    
    if (n >= 5) {
        cout << "Alice" << endl; return;
    }
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}