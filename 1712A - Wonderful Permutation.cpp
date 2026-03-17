#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()
#define gsize(x) (int)((x).size())

const char nl = '\n';
typedef long long ll;
typedef long double ld;

using namespace std;

int main() 
{
	int T;
	cin >> T;
	while (T--) {
		int n, k;
		cin >> n >> k;
		vector<int> a(n);
		for (int i = 0; i < n; i++) cin >> a[i];
		
		vector<int> b = a;
		sort(all(b));
		int x = b[k - 1];
		
		int ans = 0;
		for (int i = 0; i < k; i++) {
			if (a[i] > x) ans++;
		}
		cout << ans << nl;
	}
}