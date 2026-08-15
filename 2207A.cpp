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

        string s;
        cin >> s;

        // Maximum
        for (int i = 1; i < n - 1; i++)
        {
            if (s[i - 1] == '1' && s[i + 1] == '1')
                s[i] = '1';
        }

        int ans1 = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                ans1++;
        }

        // Minimum
        for (int i = 1; i < n - 1; i++)
        {
            if (s[i - 1] == '1' && s[i + 1] == '1')
                s[i] = '0';
        }

        for (int i = 1; i < n - 1; i++)
        {
            if (s[i - 1] == '1' && s[i + 1] == '1')
                s[i] = '0';
        }

        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                ans++;
        }

        cout << ans << " " << ans1 << '\n';
    }

    return 0;
}