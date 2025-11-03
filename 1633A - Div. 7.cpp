#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        if (n % 7 == 0)
            cout << n << '\n';
        else
        {
            ll ans = -1;
            for (int i = 0; i < 10; i++) 
            {
                ll candidate = (n - n % 10 + i);
                if (candidate % 7 == 0)
                {
                    ans = candidate;
                    break; 
                }
            }
            cout << ans << '\n';
        }
    }
    return 0;
}
