#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n; cin >> n;
    
    vector<pair<int, int> > bounds;
    vector<int> lefts(505);

    for (int i = 0; i < n; i++) {
        int m; cin >> m;
        for (int j = 0; j < m; j++) {
            int l, r; cin >> l >> r;
            bounds.push_back(make_pair(l, 0));
            bounds.push_back(make_pair(r, 1));
        }
    }

    sort(bounds.begin(), bounds.end());

    int ans[n + 1]; int count = 0; int leftTracker = 0;

    for (int i = 0; i <= n; i++) {
        ans[i] = 0;
    }

    for (int i = 0; i < bounds.size(); i++) {
        if (bounds[i].second == 0) {
            lefts[leftTracker] = bounds[i].first;
            leftTracker++;
            count++;
        }

        else {
            ans[count] += (bounds[i].first - lefts[max(0, leftTracker - 1)] + 1);
            // cout << count << " " << ans[count] << endl;
            lefts[leftTracker] = 0;
            leftTracker--;
            count--;
        }
    }

    for (int i = n; i >= 0; i--) {
        if (ans[i] != 0) {
            cout << i << endl;
            cout << ans[i] << endl; return 0;
        }
    }
}