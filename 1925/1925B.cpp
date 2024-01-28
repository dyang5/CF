#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

void solve() {
    long long x, n; cin >> x >> n;

    if (x/n == 1) {
        cout << 1 << endl; return;
    }

    vector<long long> divisors;

    for (long long i = 1; i <= (long long) sqrt(x); i++) {
        if (x % i == 0) {
            divisors.push_back(i);
            divisors.push_back(x/i);
        }
    }

    sort(divisors.rbegin(), divisors.rend());

    for (long long i = 0; i < divisors.size(); i++) {
        if (divisors[i] <= x/n) {
            cout << divisors[i] << endl; return;
        }
    }
    cout << 1 << endl;
}
int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}