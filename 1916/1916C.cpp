#include <iostream>
#include <vector>
#include <set>
#include <numeric>

using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int odd = 0; int even = 0; long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        if (a[i] % 2 == 1) {
            odd++;
        }

        else {
            even++;
        }

        if (i == 0) {
            cout << a[i] << " ";
        }

        else {
            if (odd % 3 == 2) {
                cout << sum - odd/3 << " ";
            }

            else {
                cout << sum - odd/3 - (odd % 3) << " ";
            }
        }
    }

    cout << endl;

}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}