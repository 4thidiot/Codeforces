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
	    for(auto &it : v)
	        cin>>it;
	    
	    ll count=0, count_e=0;
	    for(int i=0; i<n; i++)
	    {
	        if(v[i]==0)
	            count++;
	        else if(v[i]==-1)
	            count_e++;
	    }
	    
	    if(count_e%2==1)
	        count+=2;
	    
	    cout<<count<<'\n';
	}
    return 0;
}
