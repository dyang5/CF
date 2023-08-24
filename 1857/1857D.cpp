#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n; cin >> n;

    vector<int> a(n); vector<int> b(n); vector<int> c(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int maxVal = -2e9 - 1; int count = 0;

    for (int i = 0; i < n; i++) {
        c[i] = a[i] - b[i];
        if (c[i] > maxVal) {
            maxVal = c[i];
            count = 0;
        }

        if (c[i] == maxVal) {
            count++;
        }
    }

    cout << count << endl;

    for (int i = 0; i < n; i++) {
        if (c[i] == maxVal) {
            cout << i + 1 << " ";
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