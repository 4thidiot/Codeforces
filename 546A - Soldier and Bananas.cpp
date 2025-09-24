#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll k, n, w;
	cin>>k>>n>>w;
	
	ll x = k*w*(w+1)/2;
	
	if(n>=x)
	    cout<<0;
	else
	    cout<<x-n;
	    
	return 0;
}
