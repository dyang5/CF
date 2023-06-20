#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve() {
    string s; cin >> s; int n = s.length();

    unordered_map<char, int> values;
    values['A'] = 1;
    values['B'] = 10;
    values['C'] = 100;
    values['D'] = 1000;
    values['E'] = 10000;

    int maxValue = -1e9; vector<vector<int> > occurrences(5);

    long long totalSum = 0;
    for (int i = n - 1; i >= 0; i--) {
        int val = values[s[i]];
        occurrences[s[i] - 'A'].push_back(i);

        if (val < maxValue) {
            totalSum -= val;
        }

        else {
            totalSum += val;
        }   

        maxValue = max(val, maxValue);
    }

    long long maxSum = -1e10; int largest = 0;
    for (int i = 0; i < 5; i++) {
        if (occurrences[i].size() != 0) {
            int idx = occurrences[i][0];
            int idx2 = occurrences[i][occurrences[i].size() - 1];

            for (int j = 0 ; j < 5; j++) {
                string newS = s;
                newS[idx] = (char) ('A' + j);

                long long totalSum = 0; maxValue = 0;

                for (int k = n - 1; k >= 0; k--) {
                    int val = values[newS[k]];
                    if (val < maxValue) {
                        totalSum -= val;
                    }

                    else {
                        totalSum += val;
                    }

                    maxValue = max(maxValue, val);
                }

                maxSum = max(maxSum, totalSum);
            }

            for (int j = 0 ; j < 5; j++) {
                string newS = s;
                newS[idx2] = (char) ('A' + j);

                long long totalSum = 0; maxValue = 0;

                for (int k = n - 1; k >= 0; k--) {
                    int val = values[newS[k]];
                    if (val < maxValue) {
                        totalSum -= val;
                    }

                    else {
                        totalSum += val;
                    }

                    maxValue = max(maxValue, val);
                }

                maxSum = max(maxSum, totalSum);
            }            

        }

    }

    cout << maxSum << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
}