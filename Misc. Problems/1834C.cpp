#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve() {
    int n; cin >> n;
    string s, t; cin >> s >> t;

    int differencesA = 0, differencesB = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] != t[i]) {
            differencesA++;
        }

        if (s[i] != t[n-i-1]) {
            differencesB++;
        }
    }

    int secondCase = 0;

    if (differencesB % 2 == 1) {
        secondCase = 2*differencesB;
    }

    else if (differencesB == 0) {
        secondCase = 2;
    }

    else {
        secondCase = 2*differencesB - 1;
    }


    cout << min(2*differencesA  - (differencesA % 2), secondCase) << endl;
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}