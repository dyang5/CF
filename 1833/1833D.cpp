#include <bits/stdc++.h>
#include <iostream>

using namespace std;

bool is_lexi_greater(vector<int> a, vector<int>b) {
    for (int i = 0 ; i < a.size(); i++) {
        if (a[i] == b[i]) {
            continue;
        }

        else if (a[i] < b[i]) {
            return false;
        }

        else {
            return true;
        }
    }

    return true;
}

void solve() {
    int n; cin >> n; vector<int> p(n); int max = -1, maxIndex = 0; int l, r = 0;

    for (int i = 0 ; i < n; i++) {
        cin >> p[i];
        if (i >= 1 && p[i] > max) {
            max = p[i];
            maxIndex = i;
        }
    }

    // either r = maxIndex or r = maxIndex - 1
    
    vector<int> ans(n);

    for (int i = n-1 ; i >= 0; i--) {
        ans[n-1-i] = p[i];
    }

    // r = maxIndex
    for (int l = 0 ; l <= maxIndex; l++) {
        vector<int> check;

        for (int r = maxIndex + 1; r < n; r++) {
            check.push_back(p[r]);
        }

        for (int j = maxIndex; j >= l; j--) {
            check.push_back(p[j]);
        }

        for (int i = 0; i < l; i++) {
            check.push_back(p[i]);
        }

        if (is_lexi_greater(check, ans)) {
            for (int i = 0 ; i < check.size(); i++) {
                ans[i] = check[i];
            }
        }
    }

    // r = maxIndex - 1
    for (int l = 0 ; l <= maxIndex - 1; l++) {
        vector<int> check;

        for (int r = maxIndex; r < n; r++) {
            check.push_back(p[r]);
        }

        for (int j = maxIndex - 1; j >= l; j--) {
            check.push_back(p[j]);
        }

        for (int i = 0; i < l; i++) {
            check.push_back(p[i]);
        }

        if (is_lexi_greater(check, ans)) {
            for (int i = 0 ; i < check.size(); i++) {
                ans[i] = check[i];
            }
        }
    }


    for (int i = 0 ; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    cout << endl; return;
}

int main() {
    int T; cin >> T; 

    while (T--) {
        solve();
    }
}