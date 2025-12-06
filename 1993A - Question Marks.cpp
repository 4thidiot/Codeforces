#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int cnt[4] = {0};

        for(char c : s)
        {
            if(c != '?')
            {
                cnt[c - 'A']++;
            }
        }

        int ans = 0;

        for(int i = 0; i < 4; i++)
        {
            ans += min(n, cnt[i]);
        }

        cout << ans << "\n";
    }

    return 0;
}
