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
	    
	    ll flag=0;
	    for(int i=0; i<n-1; i++)
	    {
	        if(abs(v[i]-v[i+1])==7 || abs(v[i]-v[i+1])==5)
	            continue;
	        else
	            flag=1;
	    }
	    if(flag==1)
	        cout<<"NO\n";
	    else
	        cout<<"YES\n";
	}
    return 0;
}
