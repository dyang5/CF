#include <iostream>

using namespace std;

void solve() {
    int n; cin >> n;

    long long sum = 0;

    int val;
    for (int i = 0 ; i < n; i++) {
        cin >> val; sum += val;
    }

    if (sum % 2 == 1) {
        cout << "NO" << endl;
    }

    else {
        cout << "YES" << endl;
    }
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}