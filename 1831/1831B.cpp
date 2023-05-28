#include <bits/stdc++.h>

#include <iostream>
#include <map>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int answer = 0;
    unordered_map<int, int> max_in_row_a;
    unordered_map<int, int> max_in_row_b;

    int counter = 0;
    int val = -1;
    for (int i = 0; i < n; i++) {
        if (counter == 0) {
            counter++;
            val = a[i];
            max_in_row_a[val] = max(max_in_row_a[val], 1);
        }

        else if (a[i] == val) {
            counter++;
            max_in_row_a[val] = max(max_in_row_a[val], counter);
        }

        else if (a[i] != val) {
            max_in_row_a[val] = max(max_in_row_a[val], counter);
            if (max_in_row_a[val] > answer) {
                answer = max_in_row_a[val];
            }
            counter = 1;
            val = a[i];
            max_in_row_a[val] = max(max_in_row_a[val], 1);
        }

        answer = max(max_in_row_a[val], answer);
    }

    counter = 0;
    val = -1;
    for (int i = 0; i < n; i++) {
        if (counter == 0) {
            counter++;
            val = b[i];
            max_in_row_b[val] = max(max_in_row_b[val], 1);
        }

        else if (b[i] == val) {
            counter++;
            max_in_row_b[val] = max(max_in_row_b[val], counter);
        }

        else if (b[i] != val) {
            max_in_row_b[val] = max(max_in_row_b[val], counter);
            answer = max(answer, max_in_row_b[val] + max_in_row_a[val]);

            counter = 1;
            val = b[i];
            max_in_row_b[val] = max(max_in_row_b[val], 1);
        }

        answer = max(answer, max_in_row_b[val] + max_in_row_a[val]);
    }

    cout << answer << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
}