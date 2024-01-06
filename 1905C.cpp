#include <iostream>
#include <vector>
#include <map>

using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    vector<int> indices;
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            indices.push_back(i);
        }

        else {
            while (indices.size() != 0 && s[indices[indices.size() - 1]] < s[i]) {
                indices.pop_back();
            }

            indices.push_back(i);
        }
    }

    int shift = 0, idx = 0;

    while (idx < indices.size() && s[indices[idx]] == s[indices[0]]) {
        idx++;
        shift++;
    }

    int ans = indices.size() - shift;

    for (int i = 0; i < indices.size(); i++) {
        if (i < indices.size()/2) {
            swap(s[indices[i]], s[indices[indices.size() - i - 1]]);
        }
    }

    for (int i = 1; i < n; i++) {
        if (s[i] < s[i - 1]) {
            cout << -1 << endl; return;
        }
    }

    cout << ans << endl;
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}