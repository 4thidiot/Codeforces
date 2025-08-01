#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll t;
	cin>>t;
	
	while(t--)
	{
	    ll a, b, x, y, n;
	    cin>>a>>b>>x>>y>>n;
	    
	    ll ans = 1e18;
	    
	    for (int i = 0; i < 2; i++)
	    {
	        int a_op = min (n, a - x);
	        int b_op = min (n - a_op, b - y);
	        ans = min(ans, (a - a_op)*(b - b_op));
	        swap (a,b);
	        swap (x,y);
	    }
	    
	    cout<<ans<<'\n';
	}
    return 0;
}
