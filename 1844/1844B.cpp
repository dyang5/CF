#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n; cin >> n;

    if (n == 1) {
        cout << 1 << endl; return;
    }

    else if (n == 2) {
        cout << "1 2" << endl; return;
    }

    vector<int> a(n);

    a[0] = 2; a[n - 1] = 3; a[(n-1)/2] = 1;

    int counter = 4;

    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            a[i] = counter;
            counter++;
        }

        cout << a[i] << " ";
    }

    cout << endl;
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}