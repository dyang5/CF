#include <iostream>
#include <vector>
#include <map>


using namespace std;

void solve() {
    long long n; cin >> n;

    vector<long long> a(n), b(n); long long totalSum = 0; long long runningSum = 0; 
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
        totalSum += a[i];
        b[i] = a[i];
    }

    sort(b.begin(), b.end());

    map<long long, long long> ans;

    for (long long i = 0; i < n; i++) {
        runningSum += b[i];
        if (ans[b[i]] == 0) {
            ans[b[i]] += 1 + i * b[i] - (runningSum - b[i]) + i;
            ans[b[i]] += (totalSum - runningSum) - (n - 1 - i) * b[i] + (n-1-i);
        }
    }

    for (long long i = 0; i < n; i++) {
        cout << ans[a[i]] << " ";
    }

    cout << endl; 


}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}