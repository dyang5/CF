#include <bits/stdc++.h>

#include <iostream>
#include <map>
#include <set>

using namespace std;

void solve() {
    int n;
    cin >> n;

    int arr[n + 1]; map<int, vector<int> > occurrences; bool duplicates = false;
    int largestElement = -1;

    for (int i = 0; i < n + 1; i++) {
        arr[i] = 0;
    }

    int val;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (occurrences[arr[i]].size() != 0) {
            duplicates = true;
        }
        occurrences[arr[i]].push_back(i);
        largestElement = max(largestElement, arr[i]);
    }

    int m = -1;
    for (int i = 0 ; i <= n; i++) {
        if (occurrences[i].size() == 0) {
            m = i;
            break;
        }
    }

    if (occurrences[m + 1].size() > 0) {
        int firstOccurrence = occurrences[m+1][0];
        int lastOccurrence = occurrences[m+1][occurrences[m + 1].size() - 1];

        set<int> elements; elements.insert(m);

        for (int i = 0 ; i < firstOccurrence; i++) {
            if (arr[i] < m) {
                elements.insert(arr[i]);
            }
        }

        for (int i = lastOccurrence + 1; i < n; i++) {
            if (arr[i] < m) {
                elements.insert(arr[i]);
            }
        }

        // int sz = elements.size();

        if (elements.size() > m) {
            cout << "Yes" << endl; return;
        }

        else if (elements.size() <= m) {
            cout << "No" << endl; return;
        }
    }

    else if (duplicates) {
        cout << "Yes" << endl; return;
    }

    else if (largestElement > m + 1) {
        cout << "Yes" << endl; return;
    }

    cout << "No" << endl;
    
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
}