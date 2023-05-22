#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
void solve() {
    int n; cin >> n; vector<int> arr(n);
        
    int parity[2] = {0, 0};
    
    for (int i = 0 ; i < n; i++) {
        cin >> arr[i];
        parity[arr[i] % 2]++;
    }
    
    if (parity[0] == 0 || parity[1] == 0) {
        cout << "YES" << endl; return;
    }
    
    sort(arr.begin(), arr.end());
    bool even = false;
    
    if (arr[0] % 2 == 0) {
        even = true;
    }

    for (int i = 1; i < n; i++) {
        if (even) {
            if (arr[i] % 2 == 1) {
                cout << "NO" << endl; return;
            }
            
            else if (arr[i] - arr[0] == 0) {
                cout << "NO" << endl; return;
            }
            
        }
        
        else {
            if (arr[i] % 2 == 0) {
                if (arr[i] - arr[0] <= 0) {
                    cout << "NO" << endl; return;
                } 
                
                else if (arr[i] - arr[0] == 0) {
                    cout << "NO" << endl; return;
                }
            }    
        }
    }
    
    cout << "YES" << endl;
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}