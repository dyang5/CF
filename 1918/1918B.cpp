#include <iostream>
#include <vector>
#include <set>

using namespace std;

void solve() {
    int n; cin >> n;
    vector<pair<int, int> > a; vector<int> b(n);

    int val;
    for (int i = 0; i < n; i++) {
        cin >> val;
        a.push_back(make_pair(val, i));
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    sort(a.begin(), a.end());

    for (int i = 0 ; i < n; i++) {
        cout << a[i].first << " ";
    }

    cout << endl;

    for (int i = 0; i < n; i++) {
        cout << b[a[i].second] << " ";
    }
    cout << endl;


}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}