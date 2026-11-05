#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int ans = 1;
    for(int i = 0; i < n; i++)
    {
        int cur = 0;
        for(int j = 0; j < n; j++)
            if(a[j] % a[i] == 0)
                cur++;
        ans = max(ans, cur);
    }
    cout << n - ans << endl;
}

int main()
{
    cin.tie(0);
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
        solve();    
}