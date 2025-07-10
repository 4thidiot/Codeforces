#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n, k;
	    cin>>n>>k;
	    
	    if(k%2==n%2 && k*k<=n)
	        cout<<"YES\n";
	    else 
	        cout<<"NO\n";
	}
	return 0;
}
