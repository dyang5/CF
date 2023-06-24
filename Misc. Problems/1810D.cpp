#include <bits/stdc++.h>
#include <iostream>

using namespace std;
void solve() {
    int q; cin >> q;
    int a, b, n;

    long long minPossible = 1; long long maxPossible = 1e18; bool changed = false;

    vector<long long> ans;

    for (int i = 0; i < q; i++) {
        int val; cin >> val; long long lowRange, highRange;

        if (val == 1) {
            cin >> a >> b >> n;

            if (n == 1) {
                lowRange = 1; highRange = a;
            }

            else {
                lowRange = 1LL*(a-b) * (n-1) + b + 1;
                highRange = 1LL*(a-b) * (n-1) + a;
            }

            if (lowRange > maxPossible || highRange < minPossible) {
                ans.push_back(0);
            }

            else {
                minPossible = max(lowRange, minPossible);
                maxPossible = min(highRange, maxPossible);
                changed = true;
                ans.push_back(1);
            }
        
        }

        else {
            cin >> a >> b;

            long long low = max((minPossible - b - 1)/(a-b) + 1, 1LL);
            long long high = max((maxPossible - b - 1)/(a-b) + 1, 1LL);

            if (low == high) {
                ans.push_back(low);
            }

            else {
                ans.push_back(-1);
            }
        }
    }

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    cout << endl;
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}