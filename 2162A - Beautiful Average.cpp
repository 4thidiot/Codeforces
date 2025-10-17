#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    vector <ll> v(n);
	    for(auto& it : v)
	        cin>>it;
	    
	    ll maxi = INT_MIN;
	    for(int i=0; i<n; i++)
	        maxi = max(maxi, v[i]);
	    
	    cout<<maxi<<'\n';
	}
    return 0;
}
