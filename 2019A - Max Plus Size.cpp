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
        vector<ll> v(n);
        for(auto &it : v)
            cin >> it;

        ll mx = *max_element(v.begin(), v.end());
        ll half = (n + 1) / 2;

        if(n % 2 == 0)
            cout << mx + half << '\n';
        else
        {
            bool has = false;
            for(int i = 0; i < n; i++)
            {
                if(v[i] == mx && i % 2 == 0)
                {
                    has = true;
                    break;
                }
            }
            if(has)
                cout << mx + half << '\n';
            else
                cout << mx + half - 1 << '\n';
        }
    }
    return 0;
}
