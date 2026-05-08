#include <bits/stdc++.h>

using namespace std;

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
	
	int q;
	cin >> q;
	for (int i = 0; i < q; ++i) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int j = 0; j < n; ++j) {
			cin >> a[j];
		}
		bool ok = true;
		for (int p1 = 0; p1 < n; ++p1) {
			for (int p2 = 0; p2 < p1; ++p2) {
				ok &= abs(a[p1] - a[p2]) != 1;
			}
		}
		cout << 2 - ok << endl;
	}
	
	return 0;
}