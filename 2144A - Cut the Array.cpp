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
	    for(auto &it : v)
	        cin>>it;
	    
	    ll sum = accumulate(v.begin(), v.end(), 0);
	    if(sum%3==0)
	        cout<<"1 2\n";
	    else
	        cout<<"0 0\n";
	}
    return 0;
}
