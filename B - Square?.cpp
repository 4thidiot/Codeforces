#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    ll t;
    cin >> t;
    while (t--)
    {
        int a1, b1, a2, b2;
        cin >> a1 >> b1;
        cin >> a2 >> b2;

        if (a1 > b1)
            swap(a1, b1);
        if (a2 > b2)
            swap(a2, b2);

        if (b1 == b2 && a1 + a2 == b1)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}