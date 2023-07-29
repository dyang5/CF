#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n; cin >> n;

    vector<int> a(n-1);
    for (int i = 0; i < n - 1; i++) {
        cin >> a[i];
    }

    vector<int> ans;

    if (n == 2) {
        cout << a[0] << " " << a[0] << endl; return;
    }

    for (int i = 0; i < n-2; i++) {
        if (a[i] >= a[i+1]) {
            if (i == 0) {
                ans.push_back(a[i]);
                ans.push_back(a[i+1]);
            }

            else {
                if (ans[ans.size() - 1] > a[i+1]) {
                    ans.push_back(a[i+1]);
                }

                else {
                    ans.push_back(a[i]);
                }
            }
        }

        else {
            if (i == 0) {
                ans.push_back(0);
                ans.push_back(a[i]);
            }

            else {
                ans.push_back(a[i]);
            }
        }
    }

    ans.push_back(a[n-2]);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    cout << endl;
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}