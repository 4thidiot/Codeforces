#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;

        x -= min(a, x);
        y -= min(b, y);

        if (c >= x + y)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
