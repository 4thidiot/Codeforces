#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        vector <ll> v(3);
        for(auto& it : v)
            cin>>it;
        
        sort(v.begin(), v.end());
        
        if(v[0]==v[1] && v[1]==v[2])
            cout<<"YES\n";
        else if(v[1]%v[0]==0 && v[2]%v[0]==0 && v[1]/v[0]-1+v[2]/v[0]-1<=3)
            cout<<"YES\n";
        else
            cout<<"NO\n";
        
    }
    return 0;
}
