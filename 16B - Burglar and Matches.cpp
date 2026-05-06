#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve() {
    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> v;

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        v.push_back({b, a});
    }

    sort(v.rbegin(), v.rend());

    int ans = 0;

    for (auto it : v) {
        int b = it.first;
        int a = it.second;

        int take = min(n, a);
        ans += take * b;
        n -= take;

        if (n == 0) break;
    }

    cout << ans << endl;
}

signed main() {
    solve();
    return 0;
}