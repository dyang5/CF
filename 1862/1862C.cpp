#include <iostream>
#include <vector>
#include <math.h>
#include <map>

using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int largest = a[0];

    if (largest != n) {
        cout << "NO" << endl; return;
    }

    for (int i = 0; i < n; i++) {
        int num = a[i];

        if (num > n) {
            cout << "NO" << endl;
        }

        if (a[num - 1] >= i + 1) {
            if (num < n && a[num] >= i + 1) {
                cout << "NO" << endl; return;
            }
            continue;
        }
    }

    cout << "YES" << endl;
    
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}