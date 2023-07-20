#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n); vector<int> b(n);

    bool zeros = true;
    for (int i = 0; i < n; i++) {
        cin >> a[i];

        if (a[i] != 0) {
            zeros = false;
        }
    }

    for (int i = 0 ; i < n; i++) {
        cin >> b[i];
    }

    if (zeros) {
        cout << "YES" << endl; return;
    }

    for (int i = 0; i < n; i++) {
        int c = abs(a[i] - b[i]);



        
        if ((a[i] % 3 != b[i] % 3) && (b[i] % 3 != abs(a[i] - b[i]) % 3) && (a[i] % 3 != abs(a[i] - b[i]) % 3)) {
            continue;
        }

        else if (a[i] % 3 == b[i] % 3) {
            continue;
        }

        else {
            cout << "NO" << endl; return;
        }
    }

    cout << "YES" << endl; return;
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}