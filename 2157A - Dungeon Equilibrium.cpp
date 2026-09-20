#include <bits/stdc++.h>
using namespace std;

#define nl "\n"
#define nf endl
#define ll long long
#define pb push_back
#define _ << ' ' <<

#define INF (ll)1e18
#define mod 998244353
#define maxn 110

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #if !ONLINE_JUDGE && !EVAL
        ifstream cin("input.txt");
        ofstream cout("output.txt");
    #endif

    ll t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        vector<ll> f(n + 1, 0);
        for (ll i = 1; i <= n; i++) {
            ll x; cin >> x; f[x]++;
        }

        ll ans = 0;
        for (ll i = 0; i <= n; i++) {
            if (f[i] >= i) ans += f[i] - i;
            else ans += f[i];
        }

        cout << ans << nl;
    }

    return 0;
}
