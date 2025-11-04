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
        
        sort(v.begin(), v.end());    
        ll sum = 0;
        for(int i=1; i<n; i++)
            sum += v[i]-v[i-1]; 
        cout<<sum<<'\n';
    }
    return 0;
}
