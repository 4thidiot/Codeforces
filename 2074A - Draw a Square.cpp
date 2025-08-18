#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll l, r, d, u;
	    cin>>l>>r>>d>>u;
	    
	    if(l==r && d==u && l==d)
	        cout<<"YES\n";
	    else
	        cout<<"NO\n";
	}
    return 0;
}
