#include <bits/stdc++.h>

#include <iostream>
#include <map>

using namespace std;

void solve() {
    int n;
    cin >> n;

    int val;
    int totalPrimeFactors = 0;

    map<int, int> primeFactors;
    for (int i = 0; i < n; i++) {
        cin >> val;
        while (val % 2 == 0) {
            primeFactors[2]++;
            totalPrimeFactors++;
            val /= 2;
        }

        for (int i = 3; i <= sqrt(val); i++) {
            while (val % i == 0) {
                primeFactors[i]++;
                totalPrimeFactors++;

                val /= i;
            }
        }

        if (val > 2) {
            primeFactors[val]++;
            totalPrimeFactors++;
        }
    }


    int leftovers = 0; int twos = 0;
    for (auto it = primeFactors.begin(); it != primeFactors.end(); it++) {
        twos += it->second/2;
        leftovers += it->second % 2;
    }

    cout << twos + leftovers/3 << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
}