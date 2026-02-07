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

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int ans = 0;
        for (int x = 0; x <= n; x++) 
        {
            int cnt = 0;
            for (int v : a)
                if (v == x) cnt++;
            ans += cnt / 2;
        }

        cout << ans << '\n';
    }
    return 0;
}
