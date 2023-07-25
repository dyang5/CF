#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int a, b, c; cin >> a >> b >> c;

    if (a + b >= 10 || b + c >= 10 || a + c >= 10) {
        cout << "YES" << endl; return;
    }

    cout << "NO" << endl; return;
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}