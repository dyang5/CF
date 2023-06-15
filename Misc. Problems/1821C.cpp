#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve() {
    string s; cin >> s;

    int n = s.length();

    unordered_map<char, vector<int> > occurrences;
    for (int j = 0; j < s.length(); j++) {
        occurrences[s[j]].push_back(j);
    }

    int ans = n;
    for (auto it = occurrences.begin(); it != occurrences.end(); it++) {
        int longest = 0;
        for (int i = 0 ; i < it->second.size(); i++) {
            if (i == 0) {
                longest = max(it->second[i], longest);
            }

            if (i == it->second.size() - 1) {
                longest = max(-(it->second[i]) - 1 + n, longest);
            }

            else {
                longest = max(it->second[i+1]- it->second[i] - 1, longest);
            }
        }

        if (longest == 0) {
            ans = 0;
        }

        else if (log2(longest) == ceil(log2(longest))) {
            longest = ceil(log2(longest)) + 1;
        }

        else {
            longest = ceil(log2(longest));
        }

        
        ans = min((int) longest, ans);
    }

    cout << ans << endl;
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}