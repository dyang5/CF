#include <iostream>
#include <vector>
#include <math.h>
#include <map>

using namespace std;

void solve() {
    int n, m; cin >> n >> m;

    vector<string> s;

    string st;
    for (int i = 0; i < n; i++) {
        cin >> st;
        s.push_back(st);
    }

    int ans = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (ans == 0 && s[j][i] == 'v') {
                ans++;
                j = n;
            }
            if (ans == 1 && s[j][i] == 'i') {
                ans++;
                j = n;
            }
            if (ans == 2 && s[j][i] == 'k') {
                ans++;
                j = n;
            }
            if (ans == 3 && s[j][i] == 'a') {
                ans++;
                j = n;
                cout << "YES" << endl; return;
            }                        
        }
    }

    cout << "NO" << endl; return;
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}