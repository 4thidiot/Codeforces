#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
#define INF(t) numeric_limits<t>::max()

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	int tc; cin >> tc;
	while(tc--) {
		string s; cin >> s;
		int n = s.size();
		map<int, int> depth_enter;
		int v = 0;
		bool ans = false;
		for(int i = 0; i < n; i++) {
			if(s[i] == '(') v++;
			else v--;

			if(i > 0 && i < n - 1 && v == 0) ans = true;
		}
		if(ans) cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;
}
