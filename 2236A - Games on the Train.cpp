#include <bits/stdc++.h>
#define int long long
 
using namespace std;
 
const int INF = (int) 1e18;
 
int32_t main() {

 
    int _;
    cin >> _;
 
    while (_--) {
        int n;
        cin >> n;
 
        vector <int> a(n);
        int mx = -INF;
        int mn = INF;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            mx = max(mx, a[i]);
            mn = min(mn, a[i]);
        }
 
        cout << mx - mn + 1 << "\n";
    }
 
    return 0;
}
