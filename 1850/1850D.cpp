#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    vector<bool> check(n); check[0] = true;
    for (int i = 1; i < n; i++) {
        if (a[i] - a[i-1] <= k) {
            check[i] = true;
        }
    }

    int ans = n;
    int cnt = 0; bool start = true; int idx = 0;
    while (idx < n) {

        if (cnt == 0) {
            start = false;

            if (idx == n - 1) {
                ans = min(ans, n - 1);
            }
            cnt++; idx++;
        }

        else if (check[idx] == true) {
            if (idx == n - 1) {
                cnt++; idx++;
                ans = min(ans, n - cnt);
            }  

            else {
                cnt++; idx++;
            }          
        }

        else if (check[idx] == false) {
            ans = min(ans, n - cnt); cnt = 0;
            start = true;
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