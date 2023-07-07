#include <iostream>
#include <vector>

using namespace std;

void solve() {
    string s; cin >> s;

    vector<int> occurrences(26);
    for (int i = 0; i < s.length(); i++) {
        occurrences[s[i] - 'a']++;
    }

    int num = 0;

    if (s.length() % 2 == 1) {
        bool odd = false;
        for (int i = 0; i < 26; i++) {
            if (odd && occurrences[i] % 2 == 1) {
                cout << "NO" << endl; return;
            }

            if (occurrences[i] % 2 == 1) {
                odd = true;
            }

            if (occurrences[i] >= 2) {
                num++;
            }
        }

        if (num > 1 && odd) {
            cout << "YES" << endl; return;
        }

        else {
            cout << "NO" << endl; return;
        }
    }

    num = 0;
    for (int i = 0; i < 26; i++) {
        if (occurrences[i] % 2 == 1) {
            cout << "NO" << endl; return;
        }

        if (occurrences[i] % 2 == 0 && occurrences[i] > 0) {
            num++;
        }
    }

    if (num > 1) {
        cout << "YES" << endl;
    } 

    else {
        cout << "NO" << endl;
    }

}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}