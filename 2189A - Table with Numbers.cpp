#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, h, l;
        cin >> n >> h >> l;

        int R = 0, C = 0, U = 0;

        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if(x <= h) R++;
            if(x <= l) C++;
            if(x <= max(h, l)) U++;
        }

        cout << min({R, C, U / 2}) << '\n';
    }

    return 0;
}