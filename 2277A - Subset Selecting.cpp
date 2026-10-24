#include <bits/stdc++.h>

using namespace std;

constexpr int N = 105;

int n, k, a, c[N], s;
bool t;

void solve() {
	cin >> n >> k, s = t = 0;
	for(int i = 0; i <= n; ++i) {
		c[i] = 0;
	}
	for(int i = 1; i <= n; ++i) {
		cin >> a, ++c[a];
	}
	for(int i = 0; i <= n; ++i) {
		if(not c[i] or s + c[i] < k) {
			cout << i << '\n';
			return;
		}
		s += c[i] - k;
	}
	return;
}

int main() {
	int T = 1; cin >> T;
	while(T--) solve();
	return 0;
}
