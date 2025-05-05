#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll n, m;
	cin>>n>>m;
	vector <ll> v(m);
	for(int i=0; i<m; i++)
	    cin>>v[i];
	
	ll ans=v[0]-1;
	for(int i=0; i<m-1; i++)
	{
	    if(v[i+1]>=v[i])
	        ans+=v[i+1]-v[i];
	    else
	        ans+=n+(v[i+1]-v[i]);
	}
    cout<<ans;
    
    return 0;
}
