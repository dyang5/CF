#include <iostream>

using namespace std;

void solve() {
    int n; cin >> n;

    int neg = 0; int pos = 0; int val;
    for (int i = 0; i < n; i++) {
        cin >> val;
        if (val == -1) {
            neg++;
        }

        else {
            pos++;
        }
    }

    int ans = 0;

    if (neg > n/2) {
        ans = neg - n/2;
        neg = n/2; pos = n/2;
    }


    if (neg % 2 == 1) {
        ans++;
    }
    cout << ans << endl;
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}