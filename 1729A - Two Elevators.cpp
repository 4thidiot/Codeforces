#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a, b, c;
        cin>>a>>b>>c;
        
        if(a==1)
            cout<<1<<endl;
        else if( (abs(c-b)+c-1) > a-1)
            cout<<1<<endl;
        else if( (abs(c-b)+c-1) == a-1) 
            cout<<3<<endl;
        else
            cout<<2<<endl;
    }
    return 0;
}
