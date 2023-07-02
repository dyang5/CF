#include <iostream>

using namespace std;

void solve() {
    int n, k, x; cin >> n >> k >> x;

    if (x != 1) {
        cout << "YES" << endl;
        cout << n << endl;
        for (int i = 0; i < n; i++) {
            cout << "1 ";
        }

        cout << endl; return;
    }

    if (k == 1 && x == 1) {
        cout << "NO" << endl; return;
    }

    if (k >= 2) {
        if (n % 2 == 0) {
            cout << "YES" << endl;
            cout << n/2 << endl;

            for (int i = 0; i < n/2; i++) {
                cout << "2 ";
            }

            cout << endl; return;
        }

        else if (k == 2) {
            cout << "NO" << endl; return;
        }

        else {
            cout << "YES" << endl;
            if (n % 2 == 1) {
                cout << (n - 3)/2 + 1 << endl;

                cout << "3 ";

                for (int i = 0; i < (n-3)/2; i++) {
                    cout << "2 ";
                }

                cout << endl; return;
            }
        }
    }
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}