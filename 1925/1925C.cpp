#include <vector>
#include <iostream>
#include <string>

using namespace std;

void solve() {
    int n, k, m; cin >> n >> k >> m;
    string s; cin >> s;

    vector<int> chars(k); string soFar = ""; int counter = 0;
    for (int i = 0; i < m; i++) {
        if (chars[s[i] - 'a'] == 0) {
            counter++;

            chars[s[i] - 'a']++;        
        }

        if (counter == k) {
            fill(chars.begin(), chars.end(), 0);
            soFar += s[i];
            counter = 0;
        }
    }
    
    if (soFar.length() >= n) {
        cout << "YES" << endl; return;
    }

    else {
        cout << "NO" << endl;
        cout << soFar;

        for (int j = 0; j < k; j++) {
            if (chars[j] == 0) {
                for (int i = 0; i < n - soFar.length(); i++) {
                    cout << (char) ('a' + j);
                }                
                cout << endl; return;
            }
        }

    }
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}