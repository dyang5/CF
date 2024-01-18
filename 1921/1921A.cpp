#include <iostream>
#include <vector>
#include <set>

using namespace std;

void solve() {
    long long x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    long long ans = 1;
    if (x1 == x2) {
        ans = abs(y1-y2)*abs(y1-y2);
    }

    else if (x1 == x3) {
        ans = abs(y1-y3)*abs(y1-y3);
    }

    else if (x1 == x4) {
        ans = abs(y1-y4)*abs(y1-y4);
    }

    else if (y1 == y2) {
        ans = abs(x1-x2)*abs(x1-x2);
    }

    else if (y1 == y3) {
        ans = abs(x1-x3)*abs(x1-x3);
    }

    else if (y1 == y4) {
        ans = abs(x1-x4)*abs(x1-x4);
    }

    cout << ans << endl;
    
}
int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}