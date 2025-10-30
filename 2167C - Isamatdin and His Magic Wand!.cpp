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
	    
	    ll flag = 0;
	    for(int i=0; i<n-1; i++)
	    {
	        if(v[i]%2!=v[i+1]%2)
	            flag++;
	    }
	    
	    if(flag==0)
	    {
	        for(auto it : v)
	            cout<<it<<" ";
	        cout<<endl;
	    }
	    else
	    {
	        sort(v.begin(), v.end());
	        for(auto it : v)
	            cout<<it<<" ";
	        cout<<endl;
	    }
	}
    return 0;
}
