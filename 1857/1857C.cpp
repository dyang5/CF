#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n; cin >> n;
    int m = n * (n-1)/2; vector<int> a(m);
    
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }
    
    sort(a.begin(), a.end());
    
    for (int i = 0; i < m; i+= --n) {
        cout << a[i] << ' ';
    }
    
    cout << "1000000000" << endl;
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}