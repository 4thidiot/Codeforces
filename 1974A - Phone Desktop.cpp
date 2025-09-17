#include <bits/stdc++.h>
using namespace std;
#define ll int

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll x, y;
	    cin>>x>>y;
	    ll screens=0;
	    
	    ll mm = (y+1)/2;
	    x -= (mm*15 - y*4);
	    x = max(x, 0);
	    
	    mm += (x+15-1)/15;
	    
	    cout<<mm<<'\n';
	}
    return 0;
}
