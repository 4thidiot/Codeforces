#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll a, b, n;
	    cin>>a>>b>>n;
	    
	    ll count = 0;
	    while(a<=n && b<=n)
	    {
	        if(a>b)
	            b+=a;
	        else
	            a+=b;
	        count++;
	    }
	    cout<<count<<'\n';
	}
    return 0;
}
