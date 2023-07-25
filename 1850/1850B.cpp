#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n; cin >> n;

    int winner = -1; int quality = -1;

    for (int i = 1; i <= n; i++) {
        int a, b; cin >> a >> b;
        if (a <= 10 && b > quality) {
            winner = i; quality = b;
        }
    }

    cout << winner << endl;

}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}