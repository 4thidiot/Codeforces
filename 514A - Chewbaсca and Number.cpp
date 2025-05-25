#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll n;
	cin>>n;
	vector <ll> v;
	while(n>0)
	{
	    ll d;
	    d = n%10;
	    if(d>4)
	        d = 9-d;
	    v.push_back(d);
	    n = n/10;
	}
    
    for(int i=v.size()-1; i>=0; i--)
    {
        if(v[i]==0 && i==v.size()-1)
            cout<<9;
        else    
            cout<<v[i];
    }    
        
    return 0;    
}
