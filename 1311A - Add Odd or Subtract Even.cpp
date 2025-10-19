#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll a,b;cin>>a>>b;
	    if(a==b)
	        cout<<0;
	    else if(a>b)
	    {
	        if((a-b)%2==0)cout<<1;
	        else cout<<2;
	    }
	    else
	    {
	        if((b-a)%2==0)cout<<2;
	        else cout<<1;
	    }
	    cout<<'\n';
	}
	return 0;
}
