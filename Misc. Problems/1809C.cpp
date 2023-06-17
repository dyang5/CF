#include <bits/stdc++.h>
#include <iostream>

using namespace std;

vector<int> solve(int n, int k) {
    vector<int> ans(n);
    if (n == 0) {
        return vector<int>();
    }

    else if (n > k) {
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            a[i] = -1;
        }

        if (k > 0) {
            a[k-1] = 100;
        }
        a[k] = -200;
        
        return a;
    }

    else {
        vector<int> ans = solve(n - 1, k - n);
        ans.push_back(1000);
        return ans;
    }
}
int main() {
    int T; cin >> T;
    while (T--) {
        int n, k; cin >> n >> k;
        vector<int> ans = solve(n, k);
        for (int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }

        cout << endl;
    }
}