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
	    cout<<n-count(v.begin(), v.end(), *min_element(v.begin(), v.end()))<<'\n';
	}
    return 0;
}
