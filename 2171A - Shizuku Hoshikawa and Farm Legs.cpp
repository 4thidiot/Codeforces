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
	    if(n%2==1)
	        cout<<0<<'\n';
	    else
	        cout<<n/4 + 1<<'\n';
	}
    return 0;
}
