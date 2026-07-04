#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        long long n, a, b;
        cin >> n >> a >> b;

        long long q = n / 3;
        long long r = n % 3;

        long long ans = n * a;
        ans = min(ans, q * b + r * a);
        if (r > 0)
            ans = min(ans, (q + 1) * b);

        cout << ans << "\n";
    }

    return 0;
}
