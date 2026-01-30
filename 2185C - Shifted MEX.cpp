#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
	cin>>n;
	vector <ll> v(n);
	for(auto& it : v)
	    cin>>it;
	
	sort(v.begin(), v.end());
	
	ll count = 1, ans = 1;
	for(int i=0; i<n-1; i++)
	{
	    if(v[i+1] - v[i] > 1)
	        count = 1;
	    else if(v[i+1] - v[i] == 1)
	    {
	        count++;
	        ans = max(ans, count);
	    }
	}
	
	cout<<ans<<'\n';
}

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	    solve();
    
    return 0;
}
