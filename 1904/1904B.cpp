#include <iostream>
#include <vector>
#include <set>

using namespace std;

void solve() {
    int n; cin >> n;
    vector<pair<int, int> > a(n);
    vector<int> ans(n);

    long long totalSum = 0;

    for (int i = 0; i < n; i++) {
        int val; cin >> val;
        a[i] = make_pair(val, i);
        totalSum += val;
    }

    sort(a.begin(), a.end());

    vector<long long> cumSum(n);

    cumSum[0] = a[0].first;
    for (int i = 1; i < n; i++) {
        cumSum[i] = a[i].first + cumSum[i-1];
    }

    for (int i = n - 1; i >= 0; i--) {
        if (i == n - 1) {
            ans[a[i].second] = i;
        }

        else {
            if (cumSum[i] >= a[i+1].first) {
                ans[a[i].second] = ans[a[i+1].second];
            }

            else {
                ans[a[i].second] = i;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }

    cout << endl; return;



    
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}