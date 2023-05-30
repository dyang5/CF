#include <bits/stdc++.h>

#include <iostream>
#include <map>

using namespace std;

const long long NMAX = 2e5 + 5, SQRMAX = 635;
int fr[SQRMAX][NMAX];
long long a[NMAX], b[NMAX];

void solve() {
    long long n;
    cin >> n;
    long long lim = sqrt(n*2);

    long long ans = 0;
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (long long i = 0; i < n; i++) {
        cin >> b[i];
        if (a[i] <= lim) {
            fr[a[i]][b[i]]++;
        }
    }

    for (long long i = 0 ; i < n; i++) {
        if (a[i]*a[i] - b[i] >= 0 && a[i]*a[i]-b[i] <= n) {
            ans += fr[a[i]][a[i]*a[i] - b[i]];
        }
    }

    for (long long i = 0 ; i <= lim; i += 2) {
        ans -= fr[i][i*i/2];
    }

    ans /= 2;

    for (long long i = 0 ; i < n; i++) {
        for (long long val = 0 ; val <= lim && val < a[i] && val*a[i] <= 2*n ; val++) {
            if (val*a[i] - b[i] >= 1 && val*a[i] - b[i] <= n) {
                ans += fr[val][val*a[i] - b[i]];
            }
        }
    }

    cout << ans << endl;

    for (long long i = 0; i < n; i++) {
        if (a[i] <= lim) {
            fr[a[i]][b[i]] = 0;
        }
    }

}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
}