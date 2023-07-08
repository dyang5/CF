#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e6;
vector<long long> possible;

void solve() {
    int n; cin >> n;

    int lo = 0; int hi = (int) possible.size() - 1;
    while (lo < hi) {
        int mid = (lo + hi)/2;

        if (possible[mid] == n) {
            cout << "YES" << endl; return;
        }
        
        else if (possible[mid] < n) {
            lo = mid + 1;
        }
        
        else {
            hi = mid - 1;
        }
    }
    
    if (possible[lo] != n) {
        cout << "NO" << endl; return;
    }
    
    else {
        cout << "YES" << endl;
    }

}

int main() {
    int T; cin >> T;

    for (int i = 2; i < sqrt(MAXN); i++) {
        long long sum = 1LL * (i * i) + i + 1;
        
        int nxtPower = 3;
        while (sum <= MAXN) {
            possible.push_back(sum);
            sum += pow(i, nxtPower);
            nxtPower++;
        }
    }
    
    sort(possible.begin(), possible.end());    
    
    while (T--) {
        solve();
    }
}