#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

#define F first
#define S second
#define endl '\n'
#define Mp make_pair
#define pb push_back
#define pf push_front
#define size(x) (ll)x.size()
#define all(x) x.begin(), x.end()
#define fuck(x) cout<<"("<<#x<<" : "<<x<<")\n"

const int N = 2e5 + 100, lg = 18;
const ll Mod = 1e9 + 7;
const ll inf = 1e18 + 10;

// The unique non-trivial cycle of the "sum of squared decimal digits" map.
// 4 -> 16 -> 37 -> 58 -> 89 -> 145 -> 42 -> 20 -> 4 ...
const ll CYC[8] = {4, 16, 37, 58, 89, 145, 42, 20};

int t, n;
ll cnt[9];

// Signature of a lighthouse:
//   8       -> "calm": the value reaches 1 and stays there forever.
//   0..7    -> "restless": the phase of the lighthouse on the 8-cycle.
// Two lighthouses are in tune iff their signatures are equal.
int sig(ll x) {
    ll s = 0;
    while (true) {
        if (x == 1) return 8;
        for (int k = 0; k < 8; k++)
            if (x == CYC[k]) return (int)(((k - s) % 8 + 8) % 8);
        ll y = 0;
        while (x > 0) { ll r = x % 10; y += r * r; x /= 10; }
        x = y;
        s++;
    }
}

void work() {
    cin >> n;

    for (int i = 0; i <= 8; i++) cnt[i] = 0;

    for (int i = 1; i <= n; i++) {
        ll a; cin >> a;
        cnt[sig(a)] ++;
    }

    ll ans = 0;
    for (int i = 0; i <= 8; i++) ans += cnt[i] * (cnt[i] - 1) / 2;

    cout << ans << endl;
}

void reset_work() {
    return;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);

    cin >> t;
    while (t --) {
        work();
        reset_work();
    }

    return 0;
}