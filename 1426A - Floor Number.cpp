#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n, x;
	    cin>>n>>x;
	     
	    ll floor_ = 1;
	    n -= 2;
	    
	    while(n>0)
	    {
	        n -= x;
	        floor_++;
	    }
	    cout<<floor_<<'\n';
	}
    return 0;
}
