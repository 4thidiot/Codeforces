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
	    ll x, y;
	    cin>>x>>y;
	    x = min(x, y);
	    cout<<(n+x-1)/x<<'\n';
	}
    return 0;
}   
