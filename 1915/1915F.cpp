#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace std;
typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;
 
void solve(){
    int n; cin >> n;
 
    vector<pair<int, int>> arr;
 
    for (int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        arr.push_back(make_pair(b, a));
    }
 
    sort(arr.begin(), arr.end());
 
    long long ans = 0;
    ordered_set st;
 
    for(auto p : arr){
        ans += st.size() - st.order_of_key(p.second);
 
        st.insert(p.second);
    }
 
    cout << ans << endl;
}
 
int main(){
    int T; cin >> T;
 
    while (T--) {
        solve();
    }
}