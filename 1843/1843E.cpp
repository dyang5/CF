#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n, m; cin >> n >> m;

    vector<int> l(n+1); vector<int> r(n+1);

    for (int i = 1; i <= m; i++) {
        int left, right; cin >> left >> right;
        l[i] = left; r[i] = right;
    }

    int q; cin >> q;

    vector<int> queries(q+1);

    for (int i = 1; i <= q; i++) {
        cin >> queries[i];
    }

    int lo = 0; int hi = q + 1;

    while (lo + 1 < hi) {
        int mid = (lo + hi)/2;

        vector<int> a(n + 1, 0);

        for (int i = 1; i <= mid; i++) {
            a[queries[i]] = 1;
        }

        vector<int> preSum(n+1, 0); bool beautifulSegment = false;

        for (int i = 1; i <= n; i++) {
            preSum[i] = preSum[i-1] + a[i];
        }

        for (int i = 1; i <= m; i++) {
            int len = r[i] - l[i] + 1;
            
            int majority = 0;
            if (len % 2 == 0) {
                majority = len/2 + 1;
            }

            else {
                majority = (len + 1)/2;
            }

            if (preSum[r[i]] - preSum[l[i] - 1] >= majority) {
                beautifulSegment = true;
                break;
            }
        }

        if (beautifulSegment) {
            hi = mid;
        }

        else {
            lo = mid;
        }
        
    }

   if (hi == q + 1) {
        cout << -1 << endl; return;
   }

   cout << hi << endl;

}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}