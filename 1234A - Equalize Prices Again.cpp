#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin>>n;
    vector <ll> v(n);
    for(auto& it : v)
        cin>>it;
    ll sum = accumulate(v.begin(), v.end(), 0);
    ll ans = ceil(sum/(1.0*n));
    cout<<ans<<'\n';
}

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    solve();
	}
}
