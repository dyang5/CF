#include <bits/stdc++.h>
#include <iostream>
 
using namespace std;
 
int main() {
    int N; cin >> N;
 
    string val;
    long long arr[N+1];
 
    for (int i = 0; i <= N; i++) {
        arr[i] = 0;
    }

    for (int i = 0 ; i < N; i++) {
        cin >> val;
 
        if (val.length() <= 8) {
            long long value = stoll(val);
            if (value >= 0 && value < N) {
                arr[value]++;
            }
        }
    }
 
    for (int i = 0 ; i <= N; i++) {
        if (arr[i] == 0) {
            cout << i << endl; return 0;
        }
    }
 
    return 0;
}