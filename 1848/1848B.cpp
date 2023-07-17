#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n, k; cin >> n >> k;

    vector<int> a(n);
    vector<vector<int> > occurrences(n+5, vector<int>());
    vector<int> maxDiff(k+5);
    vector<int> secondDiff(k+5);

    for (int i = 1; i <= k; i++) {
        maxDiff[i] = 0;
        secondDiff[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        cin >> a[i];

        occurrences[a[i]].push_back(i);

        int sz = occurrences[a[i]].size();
        if (sz == 1) {
           maxDiff[a[i]] = max(maxDiff[a[i]], i + 1);
        }

        else {
            if (i - occurrences[a[i]][sz - 2] >= maxDiff[a[i]]) {
                secondDiff[a[i]] = maxDiff[a[i]];
                maxDiff[a[i]] = i - occurrences[a[i]][sz - 2];
            }

            else if (i - occurrences[a[i]][sz - 2] >= secondDiff[a[i]]) {
                secondDiff[a[i]] = i - occurrences[a[i]][sz - 2];
            }
        }
    }

    for (int i = 1; i <= k; i++) {
        int sz = occurrences[i].size();

        if (sz >= 1) {
            if (n - occurrences[i][sz - 1] >= maxDiff[i]) {
                secondDiff[i] = maxDiff[i];
                maxDiff[i] = n - occurrences[i][sz - 1];
            }

            else if (n - occurrences[i][sz - 1] >= secondDiff[i]) {
                secondDiff[i] = n - occurrences[i][sz - 1];
            }
        }
    }

    int ans = 2e5;
    for (int i = 1; i <= k; i++) {
        if (occurrences[i].size() >= 1) {
            ans = min(ans, max(secondDiff[i] - 1, (maxDiff[i] + 1)/2 - 1));
        }
    }

    cout << ans << endl; return;
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}