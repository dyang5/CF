#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;
    
    int odd = 0; int even = 0; int oddIdx = -1; int evenIdx = -1;
    for (int i = 1; i <= n; i++) {
        int val; cin >> val;
        
        if (val % 2 == 0) {
            even++;
            evenIdx = i;
        }
        
        else {
            odd++;
            oddIdx = i;
        }
    }
    
    if (odd == 1) {
        cout << oddIdx << endl;
    }
    
    else {
        cout << evenIdx << endl;
    }
}