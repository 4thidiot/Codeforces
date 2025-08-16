#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    string s, a, b;
	    cin>>s;
	    if(s.size()%2==1)
	        cout<<"NO\n";
	    else
	    {
	        for(int i=0; i<s.size()/2; i++)
	            a.push_back(s[i]);
	        for(int i=s.size()/2; i<s.size(); i++)
	            b.push_back(s[i]);
            
            if(a==b)
                cout<<"YES\n";
            else
                cout<<"NO\n";
	    }
	}
    return 0;
}
