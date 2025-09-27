#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll n;
	cin>>n;
	vector <ll> v(n), ans(n);
	for(auto &it : v)
	    cin>>it;
    
    for(int i=0; i<n; i++)
        ans[v[i]-1] = i+1;
    
    for(auto it : ans)
        cout<<it<<" ";
        
    return 0;
}
