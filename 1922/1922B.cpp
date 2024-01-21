#include <iostream>
#include <vector>
#include <map>

using namespace std;

void solve() {
    int n; cin >> n;
    vector<long long> a(n);

    map<long long, long long> counts;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        counts[a[i]]++;
    }

    if (n < 3) {
        cout << 0 << endl; return;
    }

    sort(a.begin(), a.end());

    long long ans = 0;

    long long soFar = 0;
    for (auto it = counts.begin(); it != counts.end(); it++) {
        ans += (*it).second * ((*it).second - 1) * ((*it).second - 2)/6;
        ans += (*it).second * ((*it).second - 1) * soFar / 2;
        soFar += (*it).second;
    }

    cout << ans << endl;
    

}
int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}