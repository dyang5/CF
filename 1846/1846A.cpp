#include <iostream>

using namespace std;

void solve() {
    int n; cin >> n;

    int ans = 0;
    for (int i = 0; i < n ; i++) {
        int a, b; cin >> a >> b;

        if (a > b) {
            ans++;
        }
    }

    cout << ans << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
}