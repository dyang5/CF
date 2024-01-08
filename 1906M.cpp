#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int n; cin >> n;
    vector<long long> a(n);
    
    long long sum = 0;
    long long mx = -1;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        mx = max(mx, a[i]);
    }

    if (mx > 2 * (sum - mx)) {
        cout << sum - mx << endl;
    }

    else {
        cout << sum/3 << endl;
    }
}