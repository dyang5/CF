#include <iostream>
#include <vector>
#include <set>

using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    
    for (int i = 0; i < n; i++) {
        for (int i = 0; i < k; i++) {
            cout << (char) ('a' + (int) i);
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