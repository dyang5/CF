#include <iostream>

using namespace std;

void solve() {
    long long xa, ya, xb, yb, xc, yc; cin >> xa >> ya >> xb >> yb >> xc >> yc;
    cout << 1 + max(0LL, min(xc-xa, xb-xa)) + max(0LL, min(xa-xc, xa-xb)) + max(0LL, min(yc-ya, yb-ya)) + max(0LL, min(ya-yc, ya-yb))<< endl;
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}