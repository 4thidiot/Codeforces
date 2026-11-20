#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(x) (x).begin(), (x).end()
 
int main() {
	cin.tie(0)->sync_with_stdio(0);
 
	int t; cin >> t;
	while (t--) {
		int n; ll L; cin >> n >> L;
		vector<ll> a(n);
		rep(i,0,n) cin >> a[i];
		sort(all(a));
		if (L == 1) {
			cout << accumulate(all(a), 0ll) - a[n - 1] << "\n";
			continue;
		}
		if (a[n - 1] * a[n - 2] < L) {
			cout << "0\n";
			continue;
		}
		ll x = a[n - 1];
		ll y = 1;
		while ((y + 1) * (y + 1) < L) ++y;
		int start = n - 2;
		ll curr = 0;
 
		auto mx = [&](ll z) {
			if (z == 0) return 0ll;
			return max(0ll, x - (L - 1) / z);
		};
 
		while (start >= 0 && a[start] >= y) {
			curr += (a[start] - y);
			--start;
		}
		ll ans = curr + mx(y);
		--y;
		for (; y >= 0; --y) {
			curr += (n - 2 - start);
			while (start >= 0 && a[start] >= y) --start;
			ans = min(ans, curr + mx(y));
		}
		cout << ans << "\n";
	}
}