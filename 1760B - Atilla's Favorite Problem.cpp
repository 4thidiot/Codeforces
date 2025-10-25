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
	    sort(s.begin(), s.end());
	    
	    cout<<s[n-1]-'a'+1<<'\n';
	}
    return 0;
}
