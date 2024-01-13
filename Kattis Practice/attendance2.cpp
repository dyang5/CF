#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n; cin >> n; 
    
    vector<string> names(n);
    for (int i = 0; i < n; i++) {
        cin >> names[i];
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (i > 0 && (names[i] != "Present!" && names[i-1] != "Present!")) {
            cout << names[i-1] << endl;
            count++;
        }

        if (i == n - 1) {
            if (names[i] != "Present!") {
                cout << names[i] << endl;
                count++;
            }
        }
    }

    if (count == 0) {
        cout << "No Absences" << endl;
    }
}