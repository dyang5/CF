#include <iostream>
#include <vector>
#include <set>

using namespace std;

void solve() {
    long long n, f, a, b; cin >> n >> f >> a >> b;
    vector<long long> m(n);

    for (long long i = 0; i < n; i++) {
        cin >> m[i];
    }

    bool possible = true;
    for (long long i = 0; i < n; i++) {
        if (i == 0) {
            f -= min(a*(m[i] - 0), b);
        }

        else {
            f -= min(a*(m[i] - m[i-1]), b);
        }

        if (f <= 0) {
            possible = false;
        }
    }

    if (possible) {
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