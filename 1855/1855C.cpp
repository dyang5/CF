#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n+1);

    vector<pair<int, int> > answer;

    bool positive = false; int operations = 0; int positiveIdx = -1;
    for (int i = 1; i <= n; i++) {
        cin >> a[i]; 

        if (a[i] > 0) {
            positive = true;
            positiveIdx = i;
        }
    }

    if (!positive) {
        cout << n - 1 << endl;

        for (int i = n - 1; i >= 1; i--) {
            cout << i << " " << i + 1 << endl;
        }

        return;
    }

    else {
        while (a[positiveIdx] < 20) {
            operations++;
            answer.push_back(make_pair(positiveIdx, positiveIdx));
            a[positiveIdx] += a[positiveIdx];
        }

        for (int i = 2; i <= n; i++) {
            if (i == 2) {
                operations += 2;

                for (int j = 0; j < 2; j++) {
                    answer.push_back(make_pair(i, positiveIdx));
                    a[i] += a[positiveIdx];
                }
            }

            else {
                operations += 2;

                for (int j = 0; j < 2; j++) {
                    answer.push_back(make_pair(i, i - 1));
                    a[i] += a[i-1];
                }
                }
            }
        }

    cout << operations << endl;

    for (int i = 0 ; i < answer.size(); i++) {
        cout << answer[i].first << " " << answer[i].second << endl;
    }
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}