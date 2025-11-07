#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll n;
	cin>>n;
	string s;
	cin>>s;
	ll count_l=0, count_r=0;
	for(int i=0; i<n; i++)
	{
	    if(s[i]=='L')
	        count_l++;
	    else
	        count_r++;
	}
	cout<<count_l+count_r+1<<'\n';
    
    return 0;
}
