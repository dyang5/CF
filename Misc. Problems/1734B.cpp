#include <iostream>

using namespace std;

void solve() {
    int n; cin >> n;
    if (n == 1) {
        cout << 1 << endl; return;
    }

    if (n == 2) {
        cout << 1 << endl; 
        cout << "1 1" << endl; return;
    }

    else {
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < i; j++) {
                if (j == 0 || j == i-1) {
                    cout << "1 ";
                }

                else {
                    cout << "0 ";
                }
            }

            cout << endl;
        }
    }

}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}