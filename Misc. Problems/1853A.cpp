#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n; cin >> n;
    
    vector<int> a(n); 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int minDiff = 1e9;
    for (int i = 0; i < n-1; i++) {
        if (a[i] > a[i+1]) {
            cout << 0 << endl; return;
        }

        else {
            minDiff = min(minDiff, a[i+1] - a[i]);
        }
    }

    if (minDiff % 2 == 0) {
        cout << minDiff/2 + 1 << endl;
    }

    else {
        cout << (minDiff + 1)/2 << endl;
    }
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}