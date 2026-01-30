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
    
    ll ans = INT_MIN;
    for(int i; i<n; i++)
        ans = max(ans, v[i]);
        
    cout<<ans*n<<'\n';
}

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	    solve();
    
    return 0;
}
