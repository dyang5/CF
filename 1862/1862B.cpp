#include <iostream>
#include <vector>
#include <math.h>
#include <map>

using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> ans; ans.push_back(a[0]);

    for (int i = 1; i < n; i++) {
        if (a[i] >= a[i-1]) {
            ans.push_back(a[i]);
        }

        else {
            ans.push_back(a[i]);
            ans.push_back(a[i]);
        }
    }

    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    cout << endl;
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}