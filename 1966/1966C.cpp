#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n; cin >> n;
    set<int> s;

    for (int i = 0; i < n; i++) {
        int val; cin >> val;
        s.insert(val);
    }

    vector<int> a;
    for (auto it = s.begin(); it != s.end(); it++) {
        a.push_back(*it);
    }

    sort(a.begin(), a.end());

    int len = a.size(); 
    bool alice = true;
    for (int i = 0; i < len; i++) {
        if (a[i] != i + 1) {
            if (i == 0) {
                cout << "Alice" << endl; return;
            }
            else {
                if (i % 2 == 1) {
                    cout << "Bob" << endl; return;
                }
                else {
                    cout << "Alice" << endl; return;
                }
            }
        }
    }
    
    if (len % 2 == 0) {
        cout << "Bob" << endl;
    }
    
    else {
        cout << "Alice" << endl;
    }
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}