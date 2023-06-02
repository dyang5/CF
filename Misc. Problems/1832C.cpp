#include <bits/stdc++.h>

#include <iostream>

using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> arr(n);

    long long contrast = 0; cin >> arr[0];
    for (int i = 1; i < n; i++) {
        cin >> arr[i];
        contrast += abs(arr[i] - arr[i - 1]);
    }

    if (contrast == 0) {
        cout << 1 << endl; return;
    }

    int val = arr[0]; bool increasing = false; bool decreasing = false;
    

    vector<int> newArr; int idx = 0; val = arr[0]; newArr.push_back(arr[0]);

    while (idx < n) {
        if (val != arr[idx]) {
            val = arr[idx];
            newArr.push_back(val);
        }
        idx++;
    }
    int ans = newArr.size();
    for (int i = 0 ; i < newArr.size() - 2; i++) {
        if (newArr[i] > newArr[i+1] && newArr[i+1] > newArr[i+2]) {
            ans--;
        }

        if (newArr[i] < newArr[i+1] && newArr[i+1] < newArr[i+2]) {
            ans--;
        }
    }

    cout << ans << endl;
    
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
}