#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> ans(n);
    
    ans[n-1] = n;
    ans[n-2] = n-1;
        
    if (n % 2 == 0) {
        for (int i = 0; i < n - 2; i++) {
            ans[i] = n - 2 - i;
        }
    }
    
    if (n % 2 == 1) {
        ans[n-5] = 1; ans[n-4] = 2; ans[n-3] = 3;
        
        for (int i = 0; i < n - 5; i++) {
            ans[i] = n - 2 - i;
        }
    }
    
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    
    cout << endl;
    
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}