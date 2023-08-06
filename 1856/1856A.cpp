#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n); 

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    bool sorted = true; int maxVal = -1; int lastNotSorted = -1;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i+1]) {
            sorted = false;
            lastNotSorted = i;
        }
    }

    if (sorted) {
        cout << 0 << endl; return;
    }

    for (int i = 0; i <= lastNotSorted; i++) {
        maxVal = max(maxVal, a[i]);
    }

    cout << maxVal << endl; return;

}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}