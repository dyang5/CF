#include <bits/stdc++.h>
#include <iostream>

using namespace std;

const int MAX = 2e5 + 2;
int bitsSet[30][MAX]= {0};

void solve() {
    int l, r; cin >> l >> r;

    int ans = INT_MAX;
    for (int i = 0 ; i < 20; i++) {
        ans = min(ans, (r-l+1) - bitsSet[i][r] + bitsSet[i][l-1]);
    }

    cout << ans << endl;
}

int main() {

    int counter = 1;
    int val; int idx = 0;
    for (int i = 1; i < MAX; i++) {
        val = i;
        idx = 0;
        while (val > 0) {
            if (val % 2 == 1) {
                bitsSet[idx][i] = bitsSet[idx][i-1] + 1;
            }

            else {
                bitsSet[idx][i] = bitsSet[idx][i-1];
            }

            val /= 2;
            idx++;
        }
    }

    int T; cin >> T; 
    while (T--) {
        solve();
    }
}