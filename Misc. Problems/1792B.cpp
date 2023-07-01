#include <iostream>

using namespace std;

void solve() {
    int a, b, c, d; cin >> a >> b >> c >> d;

    if (a == 0) {
        cout << 1 << endl; return;
    }

    cout << a + 2 * min(b, c) + min(a + 1, abs(b-c) + d) << endl;

}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}