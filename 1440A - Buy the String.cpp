#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, c0, c1, h;
        cin>>n>>c0>>c1>>h;
        string s;
        cin>>s;

        ll cnt0 = 0, cnt1 = 0;
        for(char c: s)
        {
            if(c=='0')
                cnt0++;
            else
                cnt1++;
        }

        ll cost0 = min(c0, c1+h);
        ll cost1 = min(c1, c0+h);

        cout << cnt0*cost0 + cnt1*cost1 << '\n';
    }
    return 0;
}
