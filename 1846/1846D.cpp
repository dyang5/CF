#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

void solve() {
    double n, d, h; cin >> n >> d >> h;

    double ans = 0;
    vector<double> heights(n);

    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }

    for (int i = 0; i < n-1; i++) {

        if (heights[i+1] >= heights[i] + h) {
            ans += d*h/2;
        }

        else {
            ans += ((1 - (heights[i+1] - heights[i])/h) * d + d)/2 * (heights[i+1] - heights[i]);
        }
    }

    ans += d*h/2;

    cout << setprecision(20) << ans << endl;
}

int main() {
    int T; cin >> T; 
    while (T--) {
        solve();
    }
}