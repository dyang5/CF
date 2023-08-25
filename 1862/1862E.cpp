#include <iostream>
#include <vector>
#include <math.h>
#include <set>

using namespace std;

void solve() {
    long long n, m, d; cin >> n >> m >> d;

    vector<long long> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long ans = 0;
    long long sumSoFar = 0;

    multiset<long long> nums; 
    for (int i = 0; i < n; i++) {
        long long cur = sumSoFar + a[i] - d * (i+1);
        ans = max(ans, cur);

        if (a[i] > 0) {
            nums.insert(a[i]);
            sumSoFar += a[i];
            if (nums.size() >= m) {
                sumSoFar -= *nums.begin();
                nums.erase(nums.begin());
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