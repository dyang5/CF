#include <iostream>
#include <vector>

using namespace std;

const long long MOD = 1e9 + 7;

int numBits(int n) {
    int bits = 0;
    while (n >= 1) {
        if (n % 2 == 1) {
            bits++;
        }

        n /= 2;
    }

    return bits;
}



void solve() {
    int n, k; cin >> n >> k;

    vector<int> a(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    int dp[n+1][64];

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j < 64; j++) {
            dp[i][j] = 0;
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < 64; j++) {
            dp[i][j] = (dp[i][j] + dp[i-1][j]) % MOD;

            dp[i][j & a[i]] = (dp[i][j & a[i]] + dp[i-1][j]) % MOD;
        }
        
        dp[i][a[i]] = (dp[i][a[i]] + 1) % MOD;

    }

    long long ans = 0;
    for(int i = 0; i < 64; ++i) {
        if (numBits(i) == k) {
            ans = (ans + dp[n][i]) % MOD;
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
