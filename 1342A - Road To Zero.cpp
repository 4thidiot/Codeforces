#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll x, y;
	    cin>>x>>y;
	    ll a, b;
	    cin>>a>>b;
	    
	    if( (a+a)<b )
	        cout<<(x+y)*a<<endl;
	    else
	        cout<< min(x,y)*b + (max(x,y)-min(x,y))*a<<endl;
	}

}
