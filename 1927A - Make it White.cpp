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
        vector <char> v(n);
        for(auto& it : v)
            cin>>it; 
            
        ll l, r;
        for(int i=0; i<n; i++)
        {
            if(v[i]=='B')
            {
                l=i;
                break;
            }
        }
        
        for(int i=n-1; i>=0; i--)
        {
            if(v[i]=='B')
            {
                r=i;
                break;
            }
        }
        
        cout<<r-l+1<<"\n";
    }
    return 0;
}
