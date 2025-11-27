#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        ll sumA = 0, sumB = 0;

        sumA += (1LL << n);
        for (int i = 1; i < n / 2; i++)
            sumA += (1LL << i);

        for (int i = n / 2; i < n; i++)
            sumB += (1LL << i);

        cout << llabs(sumA - sumB) << '\n';
    }

    return 0;
}
