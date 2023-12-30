#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    vector<int> chars(26);

    for (int i = 0; i < n; i++) {
        chars[(int) s[i] - 'a']++;
    }

    sort(chars.rbegin(), chars.rend());
    if (chars[0] > n/2) {
        cout << 2*chars[0] - n << endl;
    }

    else {
        cout << n % 2 << endl;
    }


}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}