#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    string s;
    cin >> n >> k >> s;
    int x = 0;
    for (char c : s) if (c == '0') x++;
    x = min(max(x, n - x) + k, n);
    int y = n - x;
    long long ans = 1LL * x * (x + 1) / 2 + 1LL * y * (y + 1) / 2 + 1;
    cout << ans << '\n';
}

signed main() {
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}