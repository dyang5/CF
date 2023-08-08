#include <iostream>

using namespace std;

void solve() {
    int n; cin >> n;

    int val; int groups = 0; int total = 0; bool hasGroup = false;
    for (int i = 0; i < n; i++) {
        cin >> val; 

        if (!hasGroup) {
            hasGroup = true;
            total = val;
        }

        else {
            total = total & val;
        }

        if (total == 0) {
            groups++;
            hasGroup = false;
        }        

    }

    cout << max(groups, 1) << endl;


}
int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}