#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long p, a, b, c;
        cin >> p >> a >> b >> c;

        long long wa;
        if (p % a == 0)
        {
            wa = 0;
        }
        else
        {
            wa = a - (p % a);
        }

        long long wb;
        if (p % b == 0)
        {
            wb = 0;
        }
        else
        {
            wb = b - (p % b);
        }

        long long wc;
        if (p % c == 0)
        {
            wc = 0;
        }
        else
        {
            wc = c - (p % c);
        }

        long long ans = min(wa, min(wb, wc));
        cout << ans << "\n";
    }

    return 0;
}
