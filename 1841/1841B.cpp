#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve() {
    int n; cin >> n;

    int val; int val2;

    if (n == 1) {
        cin >> val;
        cout << "1" << endl; return;
    }

    cin >> val >> val2;

    int maxFront = -1;

    vector<int> ans; ans.push_back(1); ans.push_back(1);    
    vector<int> beautiful; beautiful.push_back(val); beautiful.push_back(val2); maxFront = max(val, val2);

    bool nondecreasing = true;

    if (val2 < val) {
        nondecreasing = false;
    }

    for (int i = 2; i < n; i++) {
        cin >> val; 
        
        if (nondecreasing) {
            if (val > maxFront) {
                ans.push_back(1);
                maxFront = max(val, maxFront);
                beautiful.push_back(val);
            }

            else if (val == maxFront) {
                ans.push_back(1);
                beautiful.push_back(val);
            }

            else {
                if (val <= beautiful[0]) {
                    ans.push_back(1);
                    beautiful.push_back(val);
                    nondecreasing = false;
                }

                else {
                    ans.push_back(0);
                }

            }
        }

        else {
            if (val >= beautiful[beautiful.size() - 1] && val <= beautiful[0]) {
                ans.push_back(1);
                beautiful.push_back(val);
            }

            else {
                ans.push_back(0);
            }
        }
    }

    for (int i = 0 ; i < ans.size(); i++) {
        cout << ans[i];
    }

    cout << endl;

}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}
