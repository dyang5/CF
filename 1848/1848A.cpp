#include <iostream>
#include <vector>

using namespace std;

void solve() {

    int n, m, k; cin >> n >> m >> k;
    int vx, vy; cin >> vx >> vy;

    bool even = false;
    for (int i = 0; i < k; i++) {
        int x, y; cin >> x >> y;
        if ((abs(x-vx) + abs(y-vy)) % 2 == 0) {
            even = true;
        }
    }

    if (!even) {
        cout << "YES" << endl;
    }

    else {
        cout << "NO" << endl;
    }
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}