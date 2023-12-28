#include <iostream>
#include <vector>
#include <set>

using namespace std;

void solve() {
    int n; cin >> n; vector<long long> a(n);
    bool odd = false; bool even = false;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2 == 1) {
            odd = true;
        }
        else {
            even = true;
        }
    }

    if (odd && even) {
        cout << 2 << endl;
    }

    else {
        long long check = 4;

        while (check < 1e18) {
            set<long long> mods;
            for (int i = 0; i < n; i++) {
                if (check > a[i]) {
                    mods.insert(a[i]);
                }

                else {
                    mods.insert((a[i] % check));
                }
            }

            if (mods.size() == 2) {
                cout << check << endl; return;
            }

            check *= 2;
        }
    }


}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}