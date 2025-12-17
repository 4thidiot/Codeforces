
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n, m;
        cin >> n >> m;

        vector<long long> a(n);
        long long sum = 0;

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        long long extra = sum - m;

        if(extra <= 0)
        {
            cout << 0 << "\n";
        }
        else
        {
            cout << extra << "\n";
        }
    }
    return 0;
}
