#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int mod = 1e9+7;

ll mpow(ll a, ll b) {
    ll r = 1;
    while (b) {
        if (b & 1) {
            r *= a;
            r %= mod;
        }
        a *= a;
        a %= mod;
        b /= 2;
    }
    return r;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i: a) cin >> i;
    sort(rbegin(a), rend(a));

    ll ans = 1;
    for (int i = 0; i < n; i++) {
        if (i < n - 1 && a[i] == a[i + 1]) break;
        ans += mpow(a[i] - 1, i + 1);
        ans %= mod;
    }
    cout << ans << '\n';
}

signed main() {
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
}