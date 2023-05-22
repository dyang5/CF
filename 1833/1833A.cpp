#include "bits/stdc++.h"
#include <iostream>
#include <set>
using namespace std;

void solve() {
    set <string> melodies;
    int n; string s; cin >> n >> s;

    for (int i = 0; i < n; i++) {
        string sub = s.substr(i, 2);
        melodies.insert(sub);
    }
    
    cout << melodies.size()<< endl;
}
 
int main() {
    cin.tie(0)->sync_with_stdio(0); 
    cin.exceptions(cin.failbit);
 
    int T = 1;
    cin >> T;
    while(T--) {
        solve();
    }
 
	return 0;
}