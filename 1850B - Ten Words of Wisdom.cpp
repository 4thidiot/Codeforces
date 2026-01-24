#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int ans = -1, mx = 0;

    for(int i = 1; i <= n; i++)
    {
        int a, b;
        cin >> a >> b;

        if(a <= 10 && b > mx)
        {
            mx = b;
            ans = i;
        }
    }

    cout << ans << "\n";
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();

    return 0;
}