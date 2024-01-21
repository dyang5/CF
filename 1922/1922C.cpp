#include <iostream>
#include <vector>
#include <map>

using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    map<long long, long long> leftOrRight;
    leftOrRight[0] = 1;
    leftOrRight[n - 1] = -1;
    for (int i = 1 ; i < n - 1; i++) {
        if (a[i] - a[i-1] < a[i + 1] - a[i]) {
            leftOrRight[i] = -1;
        }

        else {
            leftOrRight[i] = 1;
        }
    }

    long long towards[n]; long long away[n];

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            away[0] = 0;
        }

        else {
            if (leftOrRight[i] == -1) {
                away[i] = 1 + away[i-1];
            }

            else {
                away[i] = away[i-1] + a[i] - a[i-1];
            }
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        if (i == n-1) {
            towards[i] = 0;
        }

        else {
            if (leftOrRight[i] == 1) {
                towards[i] = 1 + towards[i+1];
            }

            else {
                towards[i] = towards[i+1] + a[i + 1] - a[i];
            }
        }
    }

    int m; cin >> m;
    for (int i = 0; i < m; i++) {
        int u, v; cin >> u >> v; u--; v--;

        if (u < v) {
            cout << towards[u] - towards[v] << endl;
        }

        else {
            cout << away[u] - away[v] << endl;
        }
    }
    
}
int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}