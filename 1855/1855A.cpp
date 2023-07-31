#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n; cin >> n;

    vector<int> a(n);
    int diff = 0;

    for (int i = 0 ; i < n ; i++) {
        cin >> a[i];

        if (a[i] == i + 1) {
            diff++;
        }
    }

    if (diff % 2 == 1) {
        cout << (diff + 1)/2 << endl; return;
    }

    else {
        cout << diff/2 << endl; return;
    }
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}