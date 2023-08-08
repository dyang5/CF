#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n; cin >> n;
    
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    const int MAX_VAL = 256;
    vector<bool> pref(MAX_VAL);
    pref[0] = true;
    int cur_xor = 0;
    int ans = 0;

    for (int i = 0; i < n; i++) {
        cur_xor ^= a[i];

        for (int prefix = 0; prefix < MAX_VAL; prefix++) {
            if (pref[prefix]) {
                ans = max(ans, prefix ^ cur_xor);
            }
        }

        pref[cur_xor] = true;
    }

    cout << ans << endl;

}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}