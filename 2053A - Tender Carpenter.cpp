#include <bits/stdc++.h>
 
#define MAXN 1001
int a[MAXN];
void solve() {
	int n; std::cin >> n;
	for (int i = 1; i <= n; ++i) std::cin >> a[i];
	for (int i = 1; i < n; ++i) if (2 * std::min(a[i], a[i + 1]) > std::max(a[i], a[i + 1])) 
		{ std::cout << "YES\n"; return; }
	std::cout << "NO\n";
}
 
int main() 
{
	int t; std::cin >> t; while (t--) solve(); return 0;
}