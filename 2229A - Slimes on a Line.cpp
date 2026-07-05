#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> &a, int k)
{
    int l = -1e9;
    int r = 1e9;

    for(int x : a)
    {
        l = max(l, x - k);
        r = min(r, x + k);
    }

    return l <= r;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);

        int mn = 1e9, mx = 0;

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            mn = min(mn, a[i]);
            mx = max(mx, a[i]);
        }

        int l = 0, r = mx - mn;

        while(l < r)
        {
            int mid = (l + r) / 2;

            if(check(a, mid))
                r = mid;
            else
                l = mid + 1;
        }

        cout << l << '\n';
    }

    return 0;
}
