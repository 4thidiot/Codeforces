#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;

        ll cur = 1;
        ll ans = 0;

        for(char c : s)
        {
            ll x = c - '0';
            if(x == 0)
                x = 10;

            ans += abs(x - cur) + 1;  
            cur = x;
        }

        cout << ans << '\n';
    }
    return 0;
}
