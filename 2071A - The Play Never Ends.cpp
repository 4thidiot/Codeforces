#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int k;
    cin >> k;

    if(k % 3 == 1)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
}

int main()
{
    int tt = 1;
    cin >> tt;

    while(tt--)
    {
        solve();
    }
}
