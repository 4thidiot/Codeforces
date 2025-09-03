#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    vector <ll> v(3);
	    for(auto& it : v)
	        cin>>it;
	    for(int i=1; i<=5; i++)
	    {
	        sort(v.begin(), v.end());
	        v[0]+=1;
	    }
	    
	    cout<<v[0]*v[1]*v[2]<<'\n';
	}
    return 0;
}   
