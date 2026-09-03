#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int k;
        cin >> k;

        vector<int> a(k);

        for(int i = 0; i < k; i++)
            cin >> a[i];

        int cnt = 0;
        int mx = 0;

        for(auto it : a)
        {
            mx = max(mx, it);

            if(it == 2)
                cnt++;
        }

        if(mx > 2 || cnt > 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
