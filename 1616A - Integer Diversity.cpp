
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

        int freq[101] = {0};

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            freq[abs(x)]++;
        }

        int ans = min(1, freq[0]);

        for (int x = 1; x <= 100; x++)
        {
            ans += min(2, freq[x]);
        }

        cout << ans << "\n";
    }

    return 0;
}
