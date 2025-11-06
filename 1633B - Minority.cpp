#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll count_0 = 0, count_1 = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
                count_0++;
            else
                count_1++;
        }

        if (count_0 == count_1)
            cout << count_0 - 1 << '\n';
        else
            cout << min(count_0, count_1) << '\n';
    }
    return 0;
}
