#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n, a, b;
	    cin>>n>>a>>b;
	    
	    ll ans = n * a;
        if (b < 2 * a) 
            ans = (n / 2) * b + (n % 2) * a;
        cout<<ans<<'\n';
	}
	return 0;
}
