#include <iostream>
#include <vector>
#include <map>

using namespace std;

void solve() {
    int n; cin >> n;
    
    vector<int> a(n);
    int u, v;
    for (int i = 0; i < n - 1; i++) {
        cin >> u >> v; u--; v--;
        a[u]++; a[v]++;
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) {
            count++;
        }
    }

    cout << (count + 1)/2 << endl;
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}