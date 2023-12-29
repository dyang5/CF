#include <iostream>
#include <vector>
#include <set>

using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n); int negatives = 0; bool zero = false;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] < 0) {
            negatives++;
        }

        else if (a[i] == 0) {  
            zero = true;
        }
    }

    if (zero || negatives == 0 || (negatives % 2 == 1)) {
        cout << 0 << endl; return;
    }

    else {
        cout << 1 << endl; 
        cout << "1 0" << endl; return;
    }
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}