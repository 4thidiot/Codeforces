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
	    set <ll> s;
	    while(n--)
	    {
	        ll x;
	        cin>>x;
	        s.insert(x);
	    }
	    
	    cout<<2*s.size()-1<<'\n';   
	}
    return 0;
}
