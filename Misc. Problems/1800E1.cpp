#include <bits/stdc++.h>
#include <iostream>

#include <set>
#include <queue>

using namespace std;

string swap(string s, int a, int b) {
    int n = s.length();
    if (a >= 0 && a < n && b >= 0 && b < n) {
        char temp = s[b];
        s[b] = s[a];
        s[a] = temp;
    }

    return s;
}

void bash(int n, int k, string s, string t) {
    set<string> possible;

    queue<string> q;
    q.push(s);
    possible.insert(s);

    while (!q.empty()) {
        string newS = q.front(); q.pop();
        for (int i = 0; i < n; ++i) {
            string check = swap(newS, i, i+k);
            if (possible.count(check) == 0) {
                possible.insert(check);
                q.push(check);
            }
            check = swap(newS, i, i+k+1);
            if (possible.count(check) == 0) {
                possible.insert(check);
                q.push(check);
            }
            check = swap(newS, i-k, i);
            if (possible.count(check) == 0) {
                possible.insert(check);
                q.push(check);
            }      
            check = swap(newS, i-k-1, i);
            if (possible.count(check) == 0) {
                possible.insert(check);
                q.push(check);
            }            
        }
    }
    

    if (possible.count(t) != 0) {
        cout << "YES" << endl; return;
    }

    else {
        cout << "NO" << endl; return;
    }
}

void solve() {
    int n, k; cin >> n >> k;
    string s, t; cin >> s >> t;


    if (n <= 5) {
        bash(n, k, s, t); return;
    }

    unordered_map<char, vector<int> > charA;
    unordered_map<char, vector<int> > charB;

    for (int i = 0; i < n; i++) {
        if (s[i] != t[i]) {
            charA[s[i]].push_back(i);
            charB[t[i]].push_back(i);
        }
    }

    for (auto it = charA.begin(); it != charA.end(); it++) {
        if (charA[it->first].size() != charB[it->first].size()) {
            cout << "NO" << endl; return;
        }
    }

    cout << "YES" << endl; return;
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}