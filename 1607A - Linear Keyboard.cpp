#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    string k;
		cin >> k;
		int m = k.size();
		string s;
		cin >> s;
		int n = s.size();
		map<char, int> mp;
		for (int i = 0; i < m; i++) {
			mp[k[i]] = i + 1;
		}
		
		int ans = 0;
		for (int i = 0; i + 1 < n; i++) {
			ans += (abs(mp[s[i]] - mp[s[i + 1]]));
		}
		cout << ans << '\n';
	}
    return 0;
}
