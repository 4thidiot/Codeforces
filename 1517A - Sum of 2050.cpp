#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        
        if(n % 2050 != 0)
        {
            cout << -1 << '\n';
            continue;
        }
        
        ll x = n / 2050;
        ll sum = 0;
        
        while(x)
        {
            sum += x % 10;
            x /= 10;
        }
        
        cout << sum << '\n';
    }
    return 0;
}
