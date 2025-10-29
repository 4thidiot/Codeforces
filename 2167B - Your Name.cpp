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
	    string s, t;
	    cin>>s>>t;
	    
	    sort(s.begin(), s.end());
	    sort(t.begin(), t.end());
	    
	    if(s==t)
	        cout<<"YES\n";
	    else
	        cout<<"NO\n";
	}
    return 0;
}
