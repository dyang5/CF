#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n; cin >> n; vector<pair<int, int> > a(n); vector<pair<int, int> > b(n); vector<pair<int, int> > c(n);
    
    int val;
    for (int i = 0; i < n; i++) {
        cin >> val;
        a[i] = make_pair(val, i);
    }

    for (int i = 0; i < n; i++) {
        cin >> val;
        b[i] = make_pair(val, i);
    }

    for (int i = 0; i < n; i++) {
        cin >> val;
        c[i] = make_pair(val, i);
    }
    
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());
    
    int ans = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                if (a[n-1-i].second != b[n-1-j].second && b[n-1-j].second != c[n-1-k].second && c[n-1-k].second != a[n-1-i].second) {
                    ans = max(ans, a[n-1-i].first + b[n-1-j].first + c[n-1-k].first);
                }
            }
        }
    }
    
    cout << ans << endl;

}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}