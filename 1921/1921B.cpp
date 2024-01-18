#include <iostream>
#include <vector>
#include <set>

using namespace std;

void solve() {
    int n; cin >> n;
    string s, t; cin >> s >> t;

    int zeroS = 0; int zeroT = 0; int differences = 0;
    int zeroOne = 0; int oneZero = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            zeroS++;
        }

        if (t[i] == '0') {
            zeroT++;
        }

        if (s[i] != t[i]) {
            differences++;

            if (s[i] == '0') {
                zeroOne++;
            }

            else {
                oneZero++;
            }
        }
    }

    cout << differences - min(zeroOne, oneZero) << endl;

}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}