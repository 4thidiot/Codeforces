#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    if( (3-n%3) == 3 || (3-n%3) == 0 )
	        cout<<0<<'\n';
	    else
	        cout<<3-n%3<<'\n';
	}
    return 0;
}
