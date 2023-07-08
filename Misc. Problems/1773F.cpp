#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, a, b; cin >> n >> a >> b;

    if (n == 1) {
        if (a == b) {
            cout << 1 << endl;
        }

        else {
            cout << 0 << endl;
        }

        cout << a << ":" << b << endl; return 0;
    }

    if (a + b <= n) {
        cout << n - (a+b) << endl;

        for (int i = 0; i < n - (a + b); i++) {
            cout << "0:0" << endl;
        }

        for (int i = 0; i < a; i++) {
            cout << "1:0" << endl;
        }

        for (int i = 0; i < b; i++) {
            cout << "0:1" << endl;
        }

        return 0;
    }

    else {
        cout << 0 << endl;
        if (a <= b) {
            int bPrints = n - 2;

            int extraA = max(0, n - b);

            if (a != 0) {
                for (int i = 0; i < extraA; i++) {
                    cout << "1:0" << endl;
                    bPrints--;
                }
                cout << a - extraA << ":0" << endl;
            }

            else {
                bPrints++;
            }

            for (int i = 0; i < bPrints; i++) {
                cout << "0:1" << endl;
            }

            cout << "0:" << b - max(0, bPrints) << endl; return 0;

        }

        else {
            int aPrints = n - 2;
            int extraB = max(0, n - a);

            if (b != 0) {
                for (int i = 0; i < extraB; i++) {
                    cout << "0:1" << endl;
                    aPrints--;
                }                
                cout << "0:" << b - extraB << endl;
            }

            else {
                aPrints++;
            }

            for (int i = 0; i < aPrints; i++) {
                cout << "1:0" << endl;
            }

            cout << a - max(0, aPrints) << ":0" << endl; return 0;
        }
    }
}
