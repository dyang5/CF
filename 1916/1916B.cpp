#include <iostream>
#include <vector>
#include <set>
#include <numeric>

using namespace std;

void solve() {
    long long a, b; cin >> a >> b;
    if (b % a == 0) {
        cout << (b / a) * b << endl;
    }

    else {
        cout << (a * b) / __gcd(a, b) << endl;
    }

}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}