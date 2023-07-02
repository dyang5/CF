#include <iostream>

using namespace std;

void solve() {
    long long k; cin >> k;

    vector<int> digits;
    while (k > 0) {
        digits.push_back(k % 9);
        k /= 9;
    }

    reverse(digits.begin(), digits.end());

    for (int i = 0; i < digits.size(); i++) {
        if (digits[i] < 4) {
            cout << digits[i];
        }

        else {
            cout << digits[i] + 1;
        }
    }

    cout << endl;
}
int main() {
    int T; cin >> T; 
    
    while (T--) {
        solve();
    }
}
