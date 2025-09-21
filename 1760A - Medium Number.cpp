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
	    for(auto &it : v)
	        cin>>it;
	    sort(v.begin(), v.end());
	    cout<<v[1]<<'\n';
	}
    return 0;
}
