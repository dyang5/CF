#include <iostream>
#include <vector>
#include <set>

using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    set<char> chars;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        chars.insert(s[i]);
        ans += (int) chars.size();
    } 

    cout << ans << endl;
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}