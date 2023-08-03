#include <iostream>

using namespace std;

void solve() {
    int b, c, h; cin >> b >> c >> h;
    
    int filling = c + h;

    if (filling + 1 >= b) {
        cout << 2 * b - 1 << endl;
    }

    else {
        cout << 2 * filling + 1 << endl;
    }
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}
