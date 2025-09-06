#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    vector <ll> v(4);
	    for(auto& it : v)   
	        cin>>it;
	    
	    ll a = v[0];
	    sort(v.rbegin(), v.rend());
	    for(int i=0; i<4; i++)
	    {
	        if(v[i]==a)
	        {
	            cout<<i<<'\n';
	            break;
	        }
	    }
	}
    return 0;
}
