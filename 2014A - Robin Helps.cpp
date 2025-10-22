#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n, k;
	    cin>>n>>k;
	    vector <ll> v(n);
	    for(auto& it : v)
	        cin>>it;
	    
	    ll bal=0, count=0;
	    for(auto it : v)
	    {
	        if(it==0)
	        {
	            if(bal>0)
	            {
	                bal--;
	                count++;
	            }
	        }
	        else if(it>=k)
	            bal+=it;
	    }
	    cout<<count<<'\n';
	}
    return 0;
}
