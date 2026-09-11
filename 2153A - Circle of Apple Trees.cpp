#include <bits/stdc++.h>
using namespace std;
 
int t, n;
 
int main() {
    cin >> t;
 
    while (t--) {
        cin >> n;
        
        set<int> st;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            st.insert(x);
        }
 
        cout << (int) st.size() << '\n';
    }
 
    return 0;
}
