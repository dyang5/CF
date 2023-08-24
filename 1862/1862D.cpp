#include <iostream>
#include <vector>
#include <math.h>
#include <map>

using namespace std;

void solve() {
    long long n; cin >> n;

    long long lo = 0; long long hi = 5e9 + 10;

    while (lo + 1 < hi) {
        long long mid = (lo + hi)/2;

        if (mid * (mid - 1)/2 <= n) {
            lo = mid;
        }

        else {
            hi = mid;
        }
    }

    cout << lo + (n - lo * (lo - 1)/2) << endl;

}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}