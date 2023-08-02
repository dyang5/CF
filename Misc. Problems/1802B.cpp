#include <iostream>

using namespace std;

void solve() {
    int n; cin >> n;

    vector<int> a(n);
    
    int known = 0, unknown = 0, minAvaries = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];

        if (a[i] == 1) {
            unknown++;
        }

        else {
            known += unknown;
            unknown = 0;
        }

        if (known == 0) {
            minAvaries = max(minAvaries, unknown);
        }

        else {
            minAvaries = max(minAvaries, unknown + known/2 + 1);
        }
    }    

    cout << minAvaries << endl;
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}