#include <bits/stdc++.h>

#include <iostream>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    int val;
    int left = 0;
    int right = 0;
    int seats[m + 5];

    for (int i = 0; i <= m; i++) {
        seats[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        cin >> val;

        if (val == -1) {
            left++;
        }

        if (val == -2) {
            right++;
        }

        else {
            if (val > 0 && seats[val] == 0) {
                seats[val]++;
            }
        }
    }

    int rightEmpty = 0; int leftEmpty = 0; int free = 0;
    for (int i = 1; i <= m; i++) {
        if (seats[i] > 0) {
            free++;
        }

        else {
            rightEmpty++;
        }
    }

    int ans = min(max(left, right) + free, m);

    for (int i = 1; i <= m; i++) {
        if (seats[i] > 0) {
            ans = max(ans, min(left, leftEmpty) + min(right, rightEmpty) + free);
        }

        else {
            rightEmpty--;
            leftEmpty++;
        }
    }

    cout << ans << endl;
    
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        solve();
    }
}