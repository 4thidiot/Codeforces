#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        bool good = true;

        for (int j = 2; j <= n; j++)
        {
            if ((n + 1) % j == 0)
            {
                good = false;
                break;
            }
        }

        if (good)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}