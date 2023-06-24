#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve() {
    int n, x; cin >> n >> x;
    vector<int> a(n); vector<int> b(n); vector<int> c(n);

    for (int i = 0 ; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0 ; i < n; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }

    int aIdx = 0; int bIdx = 0; int cIdx = 0; 
    bool doneA = false, doneB = false, doneC = false;
    long long start = 0;

    while (start != x && (!doneA | !doneB | !doneC)) {
        if (!doneA) {
            if ((a[aIdx] | x) == x) {
                start = start | a[aIdx];
                aIdx++;

                if (aIdx >= n) {
                    doneA = true;
                }
            }

            else {
                doneA = true;
            }
        }

        else if (!doneB) {
            if ((b[bIdx] | x) == x) {
                start = start | b[bIdx];
                bIdx++;

                if (bIdx >= n) {
                    doneB = true;
                }
            }

            else {
                doneB = true;
            }
        }

        else if (!doneC) {
            if ((c[cIdx] | x) == x) {
                start = start | c[cIdx];
                cIdx++;

                if (cIdx >= n) {
                    doneC = true;
                }
            }

            else {
                doneC = true;
            }
        }
    }

    if (start == x) {
        cout << "Yes" << endl;
    }

    else {
        cout << "No" << endl;
    }
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}