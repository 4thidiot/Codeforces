#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    vector <ll> v(n);
	    for(auto& it : v)
	        cin>>it;
	    
	    ll even=0, odd=0;
	    for(int i=0; i<n; i++)
	    {
	        if(v[i]%2==0)
	            even++;
	        else
	            odd++;
	    }
	    cout<<min(even, odd)<<'\n';
	}
    return 0;
}
