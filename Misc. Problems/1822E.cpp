#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    if (n % 2 == 1) {
        cout << -1 << endl; return;
    }

    vector<int> matches(26);
    vector<int> occurrences(26);

    for (int i = 0 ; i < 26; i++) {
        matches[i] = 0;
    }

    int totalMatches = 0; int maxMatches = 0;
    for (int i = 0; i < n/2; i++) {
        if (s[i] == s[n - i - 1]) {
            matches[s[i] - 'a']++;
            totalMatches++;

            if (matches[s[i] - 'a'] > maxMatches) {
                maxMatches = matches[s[i] - 'a'];
            }
        }
    }

    int maxOccurrences = 0;
    for (int i = 0; i < n; i++) {
        occurrences[s[i] - 'a']++;

        if (occurrences[s[i] - 'a'] > maxOccurrences) {
            maxOccurrences = occurrences[s[i] - 'a'];
        }
    }

    if (maxOccurrences > n/2) {
        cout << -1 << endl; return;
    }

    if (maxMatches > totalMatches - maxMatches) {
        cout << maxMatches << endl; return;
    }

    else {
        if (totalMatches % 2 == 0) {
            cout << totalMatches/2 << endl; return;
        }

        else {
            cout << totalMatches/2 + 1 << endl; return;
        }
    }
}
int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}