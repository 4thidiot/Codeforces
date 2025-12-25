#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll l, a, b;
        cin >> l >> a >> b;

        ll cur = a;
        ll ans = a;

        for(ll i = 0; i < l; i++)
        {
            ans = max(ans, cur);
            cur = (cur + b) % l;
        }

        cout << ans << '\n';
    }
    return 0;
}
