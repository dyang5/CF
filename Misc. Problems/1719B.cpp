#include <iostream>

using namespace std;

void solve() {
    int n, k; cin >> n >> k;

    if (k % 2 == 1) {
        cout << "YES" << endl;

        for (int i = 2; i <= n; i += 2) {
            cout << i - 1 << " " << i << endl;
        }

        return;
    }

    if (k % 2 == 0) {
        if (k % 4 == 0) {
            cout << "NO" << endl; return;
        }

        else {
            cout << "YES" << endl;
            for (int i = 2; i <= n; i += 2) {
                if ((k + i) % 4 == 0) {
                    cout << i << " " << i - 1 << endl;
                }

                else {
                    cout << i - 1 << " " << i << endl;
                }
            }

            return;
        }
    }
}
int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}