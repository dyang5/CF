#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

set<long long> factorize(long long val, long long w, long long l) {
    set<long long> factors;

    for (long long i = 1 ; i <= sqrt(val); i++) {
        if (val % i == 0) {
            factors.insert(i);
            factors.insert(val/i);
        }
    }

    return factors;
}
void solve() {
    long long w, l; cin >> w >> l;
    long long val = 2*w + 2*l - 4;
    set<long long> factors = factorize(val, w, l);

    set<long long> valid;

    for (const long long &a : factors) {
        if ((w-2) % a == 0 && l % a == 0) {
            valid.insert(a);
        }

        else if ((l-2) % a == 0 && w % a == 0) {
            valid.insert(a);
        }

        else if ((w-1) % a == 0 && (l-1) % a == 0) {
            valid.insert(a);
        }

        else if ((w-1) % 2 == 0 && (l % 2) == 0) {
            valid.insert(2);
        }

        else if ((l-1) % 2 == 0 && (w % 2) == 0) {
            valid.insert(2);
        }
    }

    cout << valid.size() << " ";

    for (const long long &ans : valid) {
        cout << ans << " ";
    }

    cout << endl; return;

}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }

}