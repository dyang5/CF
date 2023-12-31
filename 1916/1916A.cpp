#include <iostream>
#include <vector>
#include <set>

using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> b(n);

    int prod = 1;
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        prod *= b[i];
    }

    if (2023 % prod != 0) {
        cout << "NO" << endl;
    }

    else {
        cout << "YES" << endl;
        cout << 2023/prod << " ";
        for (int i = 0; i < k - 1; i++) {
            cout << 1 << " ";
        }

        cout << endl;
    }
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}