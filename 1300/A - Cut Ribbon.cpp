#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll n, a, b, c;
	cin>>n>>a>>b>>c;
	
	ll ans = INT_MIN;
	for(int i=0; i*a<=n; i++)
	{
	    for(int j=0; i*a + j*b <= n; j++)
	    {
	        ll rem = n - i*a - j*b;
	        if(rem%c==0)
	            ans = max(ans, i+j+rem/c);
	    }
	}
	
	cout<<ans;

    return 0;
}
