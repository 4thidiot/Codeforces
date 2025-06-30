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
    	vector <ll> a(n), b(n);
    	for(int i=0; i<n; i++)
    	    cin>>a[i];
    	for(int i=0; i<n; i++)
    	    cin>>b[i];
    	
    	ll count=0;
    	for(int i=0; i<n; i++)
    	{
    	    if(a[i]<b[i])
    	        count++;
    	}
    
        if(count>1)
            cout<<"NO"<<endl;
        else if(count==0)
            cout<<"YES"<<endl;
        else
        {
            ll mn=1e10, mx=0;
            for(int i=0; i<n; i++)
            {
                if(a[i]<b[i])
                    mx = b[i]-a[i];
                else
                    mn = min(mn, a[i]-b[i]); 
            }
            
            if(mx<=mn)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
