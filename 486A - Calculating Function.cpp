#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll n;
	cin>>n;
	
	if(n%2==0)
	    n=n/2;
	else
	    n=-1*(ceil(n/2.0));
	    
	cout<<n;    
    
    return 0;
}
