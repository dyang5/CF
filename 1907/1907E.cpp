#include <iostream>

using namespace std;

void solve() {
    long long n; cin >> n;

    long long ans = 1;
    while (n > 0) {
        long long dig = n % 10;
        n /= 10;
        ans *= (dig + 2) * (dig + 1)/2;
    }

    cout << ans << endl;
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}