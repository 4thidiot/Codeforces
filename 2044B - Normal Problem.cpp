#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    reverse(s.begin(), s.end());
	
	    for(int i=0; i<s.size(); i++)
	    {
	        if(s[i]=='p')
	            s[i] = 'q';
	        else if(s[i] == 'q')
	            s[i] = 'p';
	    }
	    
	    cout<<s<<'\n';
	}
    return 0;
}
