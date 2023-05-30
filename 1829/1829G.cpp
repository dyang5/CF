#include <bits/stdc++.h>

#include <iostream>
#include <set>

using namespace std;

long long ans[1000005];
long long pre[1500][1500] = {};

void solve() {
    int n; cin >> n;
    cout << ans[n] << endl;
}

int main() {
    long long curr = 1;

    for (int i = 1; i < 1500; i++) {
        for (int j = i - 1; j >= 1; j--) {
            pre[j][i-j] = pre[j-1][i-j] + pre[j][i-j-1] - pre[j-1][i-j-1] + curr*curr;
            ans[curr] = pre[j][i-j];
            curr++;

            if (curr > 1e6 + 2) {
                break;
            }
        }
    }

    int T;
    cin >> T;

    while (T--) {
        solve();
    }
}