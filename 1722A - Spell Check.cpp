#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() 
{
	string a, b;
	a = "Timur";
	
	ll n;
	cin>>n;
	cin>>b;
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    cout << (a==b ? "YES" : "NO") <<'\n';
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
        solve();
        
    return 0;
}
