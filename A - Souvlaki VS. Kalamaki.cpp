#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(auto& it : v)
        cin>>it;
    sort(v.begin(), v.end());
    for(int i=1; i<n-1; i+=2)
    {
        if(v[i]!=v[i+1])
        {
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
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
