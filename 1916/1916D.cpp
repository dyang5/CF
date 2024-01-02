#include <iostream>

using namespace std;

string zeros(int k) {
    string s = "";
    for (int i = 0; i < k; i++) {
        s += '0';
    }
    return s;
}

void solve() {
    int n; cin >> n;

    if (n == 1) {
        cout << 1 << endl; return;
    }

    for (int i = 0; i <= n - 3; i += 2) {
        cout << 1 << zeros((n - 3 - i)/2) << 6 << zeros((n - 3 - i)/2) << 9 << zeros(i) << endl;
        cout << 9 << zeros((n - 3 - i)/2) << 6 << zeros((n - 3 - i)/2) << 1 << zeros(i) << endl;

        if (i == n - 3) {
            cout << 196 << zeros(i) << endl;
        }
    }

}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}