#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (auto& it : v)
        cin >> it;

    vector<ll> ans;
    ll len = 0;

    for (int i = 0; i < n; i++)
    {
        len++;
        if (i == n - 1 || v[i + 1] == 1)
        {
            ans.push_back(len);
            len = 0;
        }
    }

    cout << ans.size() << '\n';
    for (auto it : ans)
        cout << it << " ";
    cout << '\n';

    return 0;
}
