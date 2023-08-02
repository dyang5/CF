#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, m; cin >> n >> m; int dist1, dist2, dist_topLeft;

    cout << "? 1 1" << endl;
    cin >> dist_topLeft;

    cout << "? " << 1 << " " << min(m, 1 + dist_topLeft) << endl;
    cin >> dist1;

    cout << "? " << min(n, 1 + dist_topLeft) << " " << 1 << endl;
    cin >> dist2;

    if (dist1 == dist2 && dist2 == dist_topLeft) {
        cout << "! " << 1 + dist_topLeft << " " << 1 + dist_topLeft << endl; return;
    }

    else if (dist1 < dist_topLeft) {
        cout << "! " << 1 + dist1 << " " << 1 + dist_topLeft << endl; return;
    }

    else {
        cout << "! " << 1 + dist_topLeft << " " << 1 + dist2 << endl; return;
    }
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}