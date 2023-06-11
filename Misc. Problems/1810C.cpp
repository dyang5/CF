#include <bits/stdc++.h>
#include <iostream>

#include <set>
using namespace std;

void solve() {
    int n, c, d; cin >> n >> c >> d;
    vector<int> a(n);

    set<int> nums;

    long long removeDuplicateSum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (nums.find(a[i]) == nums.end()) {
            nums.insert(a[i]);
        }

        else {
            removeDuplicateSum += c;
        }
    }

    int arr[n + 3]; int idx = 0;

    for (auto x : nums) {
        idx++;
        arr[idx] = x;
    }

    long long ans = 1LL * idx * c + d;
    for (int i = 1; i <= idx; i++) {
        ans = min(ans, 1LL * (arr[i] - i) * d + 1LL * (idx - i) * c);
    }

    cout << ans + removeDuplicateSum << endl;
    
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}