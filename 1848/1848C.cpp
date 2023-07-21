#include <iostream>
#include <vector>
#include <set>

using namespace std;

int calc(int a, int b) {
    if (a == 0) {
        return 0;
    }

    if (b == 0) {
        return 1;
    }

    if (a >= b) {
        int r = a % b;
        int k = a/b;
        if (k % 2 == 1) {
            return calc(b, r) + k + k/2;
        }

        else {
            return calc(r, b) + k + k/2;
        }
    }
    else {
        return 1 + calc(b, b - a);
    }
}

void solve() {
    int n; cin >> n;
    vector<int> a(n); vector<int> b(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0 ; i < n; i++) {
        cin >> b[i];
    }

    set<int> cycles;

    for (int i = 0; i < n; i++) {
        if (a[i] == 0 && b[i] == 0) {
            continue;
        }
    
        cycles.insert(calc(a[i], b[i]) % 3);
    }

    if (cycles.size() <= 1) {
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