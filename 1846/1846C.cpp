#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n, m, h; cin >> n >> m >> h;

    vector<int> times(m);

    long long rudolphPenalty = 0; int rudolphSolved = 0; int rudolphPlace = 1;
    for (int i = 0; i < m; i++) {
        cin >> times[i];
    }

    sort(times.begin(), times.end());

    long long totalTime = 0; int idx = 0;
    while (totalTime <= h) {
        if (idx == m) {
            break;
        }

        if (totalTime + times[idx] <= h) {
            rudolphPenalty += totalTime + times[idx];
            totalTime += times[idx];
            idx++;
        }

        else {
            break;
        }
    }

    rudolphSolved = idx;

    for (int i = 1; i < n; i++) {
        long long penalty = 0;

        for (int j = 0; j < m; j++) {
            cin >> times[j];
        }

        sort(times.begin(), times.end());

        totalTime = 0; idx = 0;
        while (totalTime <= h) {
            if (idx == m) {
                break;
            }

            if (totalTime + times[idx] <= h) {
                totalTime += times[idx];
                penalty += totalTime;
                idx++;
            }

            else {
                break;
            }
        }

        if (idx == rudolphSolved && penalty < rudolphPenalty) {
            rudolphPlace++;
        }

        else if (idx > rudolphSolved) {
            rudolphPlace++;
        }

    }
    cout << rudolphPlace << endl;

}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}