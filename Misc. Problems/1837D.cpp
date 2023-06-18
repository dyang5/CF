#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    vector<int> tracker(n); 
    int open = 0; int close = 0; bool RBS = true; bool reverseRBS = true;
    for (int i = 0; i < n; i++) {
        if (s[i] == '(') {
            open++;
            if (i == 0) {
                tracker[0] = 1;
            }

            else {
                tracker[i] = tracker[i-1] + 1;
            }
        }

        else {
            close++;

            if (close > open) {
                RBS = false;
            }

            if (i == 0) {
                tracker[0] = -1;
            }        

            else {
                tracker[i] = tracker[i-1] - 1;
            }    
        }

    }

    if (open != close) {
        cout << -1 << endl; return;
    }

    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == '(') {
            open++;
        }

        else {
            close++;

            if (close > open) {
                reverseRBS = false;
            }
        }
    }

    if (!reverseRBS && !RBS) {
        cout << 2 << endl;
        vector<int> ans(n);

        for (int i = 0; i < n; i++) {
            if (tracker[i] > 0) {
                ans[i] = 1;
            }

            else if (tracker[i] == 0) {
                ans[i] = ans[i-1];
            }

            else {
                ans[i] = 2;
            }
        }

        for (int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }

        cout << endl; return;


    }

    else {
        cout << 1 << endl;

        for (int i = 0 ; i < n; i++) {
            cout << "1 ";
        }

        cout << endl; return;
    }
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}