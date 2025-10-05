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
	    ll maxi = INT_MIN;
	    ll mini = INT_MAX;
	    
	    for(auto& it : v)
	    {
	        cin>>it;
	        maxi = max(it, maxi);
	        mini = min(it, mini);
	    } 
	    
	    cout<<maxi-mini<<'\n';
	}
    return 0;
}
