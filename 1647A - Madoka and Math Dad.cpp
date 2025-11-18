#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int sum = 0;
        int type;

        if (n % 3 == 1)
            type = 1;
        else
            type = 2;

        while (sum < n)
        {
            cout << type;
            sum += type;
            type = 3 - type;
        }

        cout << '\n';
    }
    return 0;
}
