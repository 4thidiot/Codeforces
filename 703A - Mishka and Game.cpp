#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll mishka = 0, chris = 0;
	ll n;
	cin>>n;
	while(n--)
	{
	    ll a, b;
	    cin>>a>>b;
	    if(a>b)
	        mishka++;
	    else if (a<b)
	        chris++;
	}
    if(mishka == chris)
        cout<<"Friendship is magic!^^";
    else if(mishka>chris)
        cout<<"Mishka";
    else
        cout<<"Chris";
        
    return 0;
}
