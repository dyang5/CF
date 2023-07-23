#include <iostream>

using namespace std;

void solve() {
    long long n, c; cin >> n >> c;

    long long sum = 0; long long squareSum = 0; long long val;
    for (int i = 0; i < n; i++) {
        cin >> val;
        sum += val;
        squareSum += val*val;
    }

    long long lo = 0; long long hi = 1e9;

    while (lo < hi) {
        long long mid = (lo + hi + 1)/2;

        if (mid * mid * 4 * n + 4 * mid * sum == c - squareSum) {
            cout << mid << endl; return;
        }

        else if (mid * mid * 4 * n + 4 * mid * sum > c - squareSum) {
            hi = mid - 1;
        }

        else {
            lo = mid;
        }
    }

    cout << lo << endl;
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}