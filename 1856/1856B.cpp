#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n); 

    long long sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i]; sum += a[i];
    }

    if (n == 1) {
        cout << "NO" << endl; return;
    }

    for (int i = 0; i < n; i++) {

        if (a[i] != 1) {
            sum -= 1;
        }

        else {
            sum -= 2;
        }

        if (sum < 0) {
            cout << "NO" << endl; return;
        }
    }

    cout << "YES" << endl; return;

}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}