#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;

        if (x == 0 && y == 0)
        {
            cout << 0 << '\n';
            continue;
        }

        ll d2 = x*x + y*y;
        ll r = sqrtl(d2);

        if (r*r == d2)
            cout << 1 << '\n';
        else
            cout << 2 << '\n';
    }

    return 0;
}
