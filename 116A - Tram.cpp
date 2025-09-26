#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll n;
	cin>>n;
	ll ans = 0, maximum=INT_MIN;
    while(n--)
    {
        ll a, b;
        cin>>a>>b;
        ll prev = ans;
        ans-=a;
        ans+=b;
        maximum = max(ans, maximum);
    }
    cout<<maximum;
    
    return 0;
}
