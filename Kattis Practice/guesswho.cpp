#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    int n, m, q; cin >> n >> m >> q;
    unordered_map<int, string> characters; string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        characters[i+1] = s;
    }
    
    int a; char c;
    for (int i = 0; i < q; i++) {
        cin >> a >> c; a--;

        unordered_map<int, string> copyC(characters);
        for (auto it = copyC.begin(); it != copyC.end(); it++) {
            if ((*it).second[a] != c) {
                characters.erase((*it).first);
            }
        }
    }

    if (characters.size() == 1) {
        cout << "unique" << endl;

        for (auto it = characters.begin(); it != characters.end(); it++) {
            cout << (*it).first << endl;
        }
    }

    else {
        cout << "ambiguous" << endl;
        cout << characters.size() << endl;
    }
}