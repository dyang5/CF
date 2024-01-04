#include <iostream>
#include <vector>
#include <map>

using namespace std;

void solve() {
    int n; cin >> n;
    vector<long long> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];

        if (i % 2 == 1) {
            a[i] *= -1;
        }
    }

    map<long long, int> preSum;

    long long totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += a[i];

        if (preSum[totalSum] != 0 || totalSum == 0) {
            cout << "YES" << endl; return;
        }

        preSum[totalSum]++;
    }

    cout << "NO" << endl;


}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}