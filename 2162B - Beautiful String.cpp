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
	    string s;
	    cin>>s;
	    
	    cout<<count(s.begin(), s.end(), '0')<<'\n';
	    
	    for(int i=0; i<n; i++)
	    {
	        if(s[i]=='0')
	            cout<<i+1<<" ";
	    }
	    cout<<'\n';
	}
    return 0;
}   
