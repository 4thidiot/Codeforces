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
	    
	    vector <pair<ll,ll>> a, b, c;
	    
	    for(ll i=0; i<n; i++)
	    {
	        ll num;
	        cin>>num; 
	        a.push_back(make_pair(num, i));
	    }
	    for(ll i=0; i<n; i++)
	    {
	        ll num;
	        cin>>num; 
	        b.push_back(make_pair(num, i));
	    }
	    for(ll i=0; i<n; i++)
	    {
	        ll num;
	        cin>>num; 
	        c.push_back(make_pair(num, i));
	    }
	    
	    sort(a.begin(), a.end());
	    reverse(a.begin(), a.end());
	    
	    sort(b.begin(), b.end());
	    reverse(b.begin(), b.end());
	    
	    sort(c.begin(), c.end());
	    reverse(c.begin(), c.end());
	    
	    vector <pair<ll,ll>> d(3), e(3), f(3);
	    
	    for(int i=0; i<3; i++)
	        d.push_back(a[i]);
	    for(int i=0; i<3; i++)
	        e.push_back(b[i]);
	    for(int i=0; i<3; i++)
	        f.push_back(c[i]);
	    
	    
	    ll maxi = INT_MIN;
	    for(auto i : d)
	    {
	        for(auto j : e)
	        {
	            for(auto k : f)
	            {
	                if(i.second!=j.second && j.second!=k.second && i.second!=k.second)
	                    maxi = max(maxi, i.first+j.first+k.first);
	            }
	        }
	    }
	    
	    cout<<maxi<<'\n';
	}
    return 0;
}
