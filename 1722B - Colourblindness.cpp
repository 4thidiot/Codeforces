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
	    vector <char> a(n), b(n);
	    for(auto& it : a)   
	        cin>>it;
	    for(auto& it : b)   
	        cin>>it; 
	    
	    bool ans = false;
	    for(int i=0; i<n; i++)
	    {
	        if(a[i]!=b[i] && (a[i]=='R' || b[i]=='R') )
	            ans = true;
	    }
	    
	    if(!ans)
	        cout<<"YES\n";
	    else
	        cout<<"NO\n";
	}

}
