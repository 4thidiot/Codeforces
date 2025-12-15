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

        int ans = 1;

        while(ans * 2 <= n)
        {
            ans *= 2;
        }

        cout << ans << "\n";
    }

    return 0;
}
