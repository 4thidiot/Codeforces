#include<bits/stdc++.h>
using namespace std;
int _t_,n,a[100010];
void solve()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    if(a[1]+a[n]==0)
        cout<<"NO\n";
    else
        cout<<"YES\n";
}
int main()
{
    cin>>_t_;
    while(_t_--)
        solve();
    return 0;
}