#include <iostream>
#include <set>
#include <vector>

using namespace std;

void solve() {
    int n; cin >> n;

    vector<int> hops(n+1); int val;
    for (int i = 0; i < n; i++) {
        cin >> val;
        if (val <= n) {
            hops[val]++;
        }
    }

    vector<int> trap(n+1); 

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n/i; j++) { 
            trap[i*j] += hops[i];
        }
    }

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        ans = max(ans, trap[i]);
    }

    cout << ans << endl;
}


int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}