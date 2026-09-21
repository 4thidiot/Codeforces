#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long
 
void solve() {
	string s;
	cin >> s;
	int ans = 0;
	for (int i = 0; i < (int)s.size() - 1; i++){
		ans += (s[i] == s[i + 1]);
	}
	cout << (ans <= 2 ? "YES\n" : "NO\n");
}
 
signed main()
{
#ifdef FELIX
	auto _clock_start = chrono::high_resolution_clock::now();
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
 
	int tests = 1;
	cin >> tests;
	while(tests--){
		solve();
	}
 
#ifdef FELIX
	cerr << "Executed in " << chrono::duration_cast<chrono::milliseconds>(
		chrono::high_resolution_clock::now()
			- _clock_start).count() << "ms." << endl;
#endif
	return 0;
}
