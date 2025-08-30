#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    ll t;
    cin>>t;
    while(t--)
    {
        set <int> x_c;
        set <int> y_c;
        for(int i=0; i<4; i++)
        {
            ll x, y;
            cin>>x>>y;
            x_c.insert(x);
            y_c.insert(y);
        }
        
        ll side_length = *x_c.rbegin() - *x_c.begin();
        ll area = side_length*side_length;
        cout<<area<<'\n';
    }
    return 0;
}
