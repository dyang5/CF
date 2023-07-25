#include <iostream>
#include <vector>

using namespace std;

void solve() {

    string word = "";
    string s;
    for (int j = 0; j < 8; j++) {
        cin >> s;
        for (int k = 0; k < 8; k++) {
            if (s[k] != '.') {
                word += s[k];
            }
        }
    }

    cout << word << endl;
    
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}