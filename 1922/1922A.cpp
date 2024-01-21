#include <iostream>
#include <vector>
#include <set>

using namespace std;

void solve() {
    int n; cin >> n;
    string a, b, c; cin >> a >> b >> c;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (c[i] == a[i] || c[i] == b[i]) {
            count++;
        }
    }

    if (n - count >= 1) {
        cout << "YES" << endl; 
    }

    else {
        cout << "NO" << endl;
    }
    
}
int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}