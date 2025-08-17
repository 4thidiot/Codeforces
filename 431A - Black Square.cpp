#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll a1, a2, a3, a4;
	cin>>a1>>a2>>a3>>a4;
	string s;
	cin>>s;
	ll sum = 0;
	for(int i=0; i<s.size(); i++)
	{
	    if(s[i]=='1')
	        sum+=a1;
	    else if(s[i]=='2')
	        sum+=a2;
	    else if(s[i]=='3')
	        sum+=a3;
	    else
	        sum+=a4;
	}
	cout<<sum;
    return 0;
}
