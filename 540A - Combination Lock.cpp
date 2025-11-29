#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll n;
	cin>>n;
	string a, b;
	cin>>a>>b;
	
	ll sum=0;
	for(int i=0; i<n; i++)
	    sum += min(abs(a[i]-b[i]), 10-abs(a[i]-b[i]));
	    
	cout<<sum<<'\n';
	
    return 0;
}
