#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> a;

    long long val; long long ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> val;
        ans += val/k;
        a.push_back(val % k);
    }

    sort(a.begin(), a.end());

    int leftIdx = 0; int rightIdx = a.size() - 1;

    while (leftIdx < rightIdx) {
        if (a[leftIdx] + a[rightIdx] >= k) {
            leftIdx++; rightIdx--;
            ans++;
        }

        else {
            leftIdx += 2;
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

// 3 3 1 3 2
