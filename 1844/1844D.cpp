#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n; cin >> n;

    int smallest = 0;
    for (int i = 2; i <= 26; i++) {
        if (n % i != 0) {
            smallest = i;
            i = 27;
        }
    }

    int charVal = 0;
    for (int i = 0; i < n; i++) {
        charVal = i % smallest;
        cout << (char) (charVal + 'a');
    }

    cout << endl; return;

}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}