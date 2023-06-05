#include <bits/stdc++.h>

#include <iostream>

using namespace std;

void solve() {
    int n; cin >> n;

    int pos[n + 1]; int val;

    int pos1, pos2, posN;
    for (int i = 1 ; i <= n; i++) {
        cin >> val;
        pos[val] = i;

        if (val == 1) {
            pos1 = i;
        }

        else if (val == 2) {
            pos2 = i;
        }

        else if (val == n) {
            posN = i;
        }
    }

    if ((pos1 < posN && posN < pos2) || (pos2 < posN && posN < pos1)) {
        cout << pos1 << " " << pos2 << endl; return;
    }

    else if (pos1 < pos2 && pos2 < posN) {
        cout << pos2 << " " << posN << endl; return;
    }

    else if (posN < pos1 && pos1 < pos2) {
        cout << pos1 << " " << posN << endl; return;
    }

    else if (pos2 < pos1 && pos1 < posN) {
        cout << pos1 << " " << posN << endl; return;
    }

    else if (posN < pos2 && pos2 < pos1) {
        cout << posN << " " << pos2 << endl; return;
    }

}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}