#include <iostream>
#include <vector>
#include <set>

using namespace std;

void solve() {
    long long a, b; cin >> a >> b;
    long long xk, yk, xq, yq; cin >> xk >> yk >> xq >> yq;

    long long moveX[] = {a, -a, a, -a, b, -b, b, -b};
    long long moveY[] = {b, b, -b, -b, a, a, -a, -a};

    set<pair<int, int> > knights;

    for (int i = 0; i < 8; i++) {
        if (abs(moveX[i] + xk - xq) == a && abs(moveY[i] + yk - yq) == b) {
            knights.insert(make_pair(moveX[i] + xk, moveY[i] + yk));
        }

        if (abs(moveX[i] + xk - xq) == b && abs(moveY[i] + yk - yq) == a) {
            knights.insert(make_pair(moveX[i] + xk, moveY[i] + yk));
        }
    }

    cout << knights.size() << endl;
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}