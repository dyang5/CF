#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    string s; cin >> s;

    vector<int> arr(n); int whites = 0; int ans = n;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'W') {
            whites++;            
        }

        arr[i] = whites;

        if (i == k - 1) {
            ans = min(ans, arr[i]);
        }

        else if (i >= k) {
            ans = min(ans, whites - arr[i - k]);
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