#include <iostream>
#include <vector>

using namespace std;

void solve() {
    long long n; cin >> n; 
    
    for (int i = 1; i <= 100; i++) {
        if (n % i != 0) {
            cout << i - 1 << endl; return;
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