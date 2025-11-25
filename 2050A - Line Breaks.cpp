#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;

            if ((int)s.size() <= m)
            {
                m -= (int)s.size();
                ans++;
            }
            else
            {
                for (int j = i + 1; j < n; j++)
                    cin >> s;
                break;
            }
        }
        
        cout << ans << '\n';
    }
    
    return 0;
}
