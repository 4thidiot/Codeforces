#include <bits/stdc++.h>
using namespace std;

long long digitSum(long long x)
{
    long long s = 0;
    while(x > 0)
    {
        s += x % 10;
        x /= 10;
    }
    return s;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long n;
        cin >> n;

        while(true)
        {
            long long s = digitSum(n);
            if(__gcd(n, s) > 1)
            {
                cout << n << "\n";
                break;
            }
            n++;
        }
    }

    return 0;
}
