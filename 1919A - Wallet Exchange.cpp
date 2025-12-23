#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll a, b;
	    cin>>a>>b;
	    
	    cout<<( (a+b)%2==0 ? "Bob" : "Alice" )<<'\n';
	}
    return 0;
}
