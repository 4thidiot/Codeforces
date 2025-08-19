#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll k;
	    cin>>k;
	    for(int i=0; ; i++)
	    {
	        if(i%3==0 || i%10==3)
	            continue;
	        if(--k == 0)
	        {
	            cout<<i<<'\n';
	            break;
	        }
	    }
	}
	return 0;
}
