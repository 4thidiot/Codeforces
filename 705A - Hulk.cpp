#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll n;
	cin>>n;
	for(int i=1; i<=n; i++)
	{
	    if(i%2!=0)
	        cout<<"I hate";
	    else
	        cout<<"I love";
	    if(i<n)
	        cout<<" that ";
	}
    cout<<" it\n";
    return 0;
}
