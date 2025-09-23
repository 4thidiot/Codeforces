#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n;
	cin>>n;
	vector<ll> v(n);
	for(auto& it:v)
	    cin>>it;
	
	double sum=0;
	for(auto it:v)
	    sum+=it;
	
	double ans=sum/n;
	cout<<fixed<<setprecision(4)<<ans;
	
	return 0;
}
