#include <bits/stdc++.h>
#include <iostream>

using namespace std;
void solve() {
	int n , k;
	cin >> n >> k;
 
	string s , t;
	cin >> s >> t;
 
	for (int i = 0; i < n; i++) {
		if (s[i] != t[i]) {
			if (i >= k or i <= n - (k + 1)) continue;
			else {
				cout << "NO\n";
				return;
			}
		}
	}
 
    unordered_map<char, vector<int> > charA;
    unordered_map<char, vector<int> > charB;

    for (int i = 0; i < n; i++) {
        if (s[i] != t[i]) {
            charA[s[i]].push_back(i);
            charB[t[i]].push_back(i);
        }
    }

    for (auto it = charA.begin(); it != charA.end(); it++) {
        if (charA[it->first].size() != charB[it->first].size()) {
            cout << "NO" << endl; return;
        }
    }

    cout << "YES" << endl; return;
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}