#include<bits/stdc++.h>

using namespace std;

void solve()
{
    long long x, y, k;
    cin >> x >> y >> k;
    long long ans = 0;
    for(long long i = 0; i < min(y, k); i++)
        ans += (y + i) % (x + i);
    long long full = max(0ll, k - y);
    ans += full * (y - x);
    cout << ans << endl;    
}

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
        solve();
}