#include <iostream>

using namespace std;

void solve() {
    int n, x, p; cin >> n >> x >> p;

    int roll = min(p, 2 * n + 1);

    int sector = x;
    for (int i = 1; i <= roll; i++) {
        sector = (sector + i) % n;
        // cout << sector << " ";
        if (sector == 0) {
            cout << "Yes" << endl; return;
        }
    }

    cout << "No" << endl; return;


}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}