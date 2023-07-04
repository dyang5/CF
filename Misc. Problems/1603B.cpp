#include <iostream>

using namespace std;

void solve() {
    int x, y; cin >> x >> y;

    if (x > y) {
        cout << x + y << endl; return;
    }

    cout << y - (y % x) + (y % x)/2 << endl;
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}