#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,s, x;
	    cin>>n>>s>>x;
	    vector <ll> v(n);
	    for(auto& it : v)
	        cin>>it;
	    
	    ll sum = accumulate(v.begin(), v.end(), 0);
	    
	    if(sum > s)
	        cout << "NO\n";
	    else if((sum-s) % x == 0)
	        cout << "YES\n";
	    else
	        cout << "NO\n";
	       
	}

}
