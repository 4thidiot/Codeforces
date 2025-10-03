#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
	ll n, k;
	cin>>n>>k;
	vector <int> v(n), f(n+1, 0);     
	for(int i=0; i<n; i++)
	{
	    cin>>v[i];
	    f[v[i]]++;
	}
	int c1=0, c2=f[k];
    for(int i=0; i<k; i++)
    {
        if(f[i]==0)
            c1++;
    }
    cout<<max(c1, c2)<<'\n';
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
        solve();
    
    return 0;
}
