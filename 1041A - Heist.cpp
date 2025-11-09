#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	    ll n;
	    cin>>n;
	    vector <ll> v(n);
	    for(auto& it : v)
	        cin>>it;
	    sort(v.begin(), v.end());
	    
	    ll mini = v[0], maxi = v[n-1];
	    
	    
	    cout << (maxi - mini + 1) - n << '\n';

    return 0;
}
