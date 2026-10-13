#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) x.begin(), x.end()

signed main() {
    int tt;
    cin >> tt;
    while (tt --> 0) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &x : a) cin >> x;
        vector<int> arr;
        map<int, int> mp;
        int ans = 0;
        for (int i = 0; i < n - 4; i++) {
            int cur = a[i] + a[i + 2] - a[i + 4];
            ans += mp[cur];
            if (i >= 2 && arr[i - 2] == cur) ans--;
            if (i >= 4 && arr[i - 4] == cur) ans--;
            mp[cur]++;
            arr.push_back(cur);
        }
        cout << ans << endl;
    }
}