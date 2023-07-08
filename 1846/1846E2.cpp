#include <bits/stdc++.h>
#include <set>

using namespace std;

const long long MAXN = 1e18;
set<long long> possible;

void solve() {
    long long n; cin >> n;

    if (possible.find(n) != possible.end()) {
        cout << "YES" << endl; return;
    }
    
    else {
        long long check = sqrt(n);
        
        while(check * check > n) {
            check--;
        }
        while ((check + 1) * (check + 1) <= n) {
            check++;
        }
        
        if (check > 1 && check*check + check + 1 == n) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

}

int main() {
    long long T; cin >> T;

    for (long long i = 2; i < cbrt(MAXN); i++) {
        long long sum = i*i + i + 1;
        
        long long largest = i*i*i;
        while (sum <= MAXN) {
           
            sum += largest;
            possible.insert(sum);
            if (MAXN / i < largest) {
                break;
            }
            
            largest *= i;
        }
    }
    
    while (T--) {
        solve();
    }
}