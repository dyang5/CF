#include <iostream>
#include <map>

using namespace std;

void solve() {
    int n; cin >> n;
    int x, y;

    map<int, int> wE, nS, neSW, nwSE;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;

        wE[y]++;
        nS[x]++;
        neSW[y-x]++;
        nwSE[x+y]++;
    }

    long long ans = 0;
    for (auto it = wE.begin(); it != wE.end(); it++) {
        ans += 1LL * (it->second)*(it->second - 1);
    }

    for (auto it = nS.begin(); it != nS.end(); it++) {
        ans += 1LL * (it->second)*(it->second - 1);
    }

    for (auto it = neSW.begin(); it != neSW.end(); it++) {
        ans += 1LL * (it->second)*(it->second - 1);
    }

    for (auto it = nwSE.begin(); it != nwSE.end(); it++) {
        ans += 1LL * (it->second)*(it->second - 1);
    }

    cout << ans << endl;

}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}