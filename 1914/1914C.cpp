#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> a(n);
    vector<int> b(n);
    vector<long long> sumA(n);
    vector<int> maxB(n);

    long long ans = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i == 0) {
            sumA[i] = a[i];
        }

        else {
            sumA[i] = sumA[i-1] + a[i];
        }
        maxB[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
        if (i == 0) {
            maxB[i] = b[i];
        }

        else {
            maxB[i] = max(maxB[i-1], b[i]);
        }
    }

    for (int i = 0; i < min(k, n); i++) {
        ans = max(sumA[i] + maxB[i] * (k-1-i), ans);
    }

    cout << ans << endl;

}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}