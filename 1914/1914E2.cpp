#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n); vector<int> b(n);
    vector<pair<int, int> > sum(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }    
    for (int i = 0; i < n; i++) {
        sum[i] = make_pair(a[i] + b[i], i);
    }

    sort(sum.begin(), sum.end());

    bool alice = true; long long score = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (alice) {
            score += a[sum[i].second] - 1;
            alice = false;
        }

        else {
            alice = true;
            score -= b[sum[i].second] - 1;
        }
    }
    cout << score << endl;
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}