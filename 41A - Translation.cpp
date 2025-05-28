#include <bits/stdc++.h>
using namespace std;

int main() 
{
	string s, t;
	cin>>s>>t;
	
	if(s.size()!=t.size())
	{
	    cout<<"NO";
	    return 0;
	}    
	else
	{
	    int flag=0;
	    for(int i=0; i<s.size(); i++)
	    {
	        if(s[i]!=t[s.size()-1-i])
	            flag=1;
	    }
	    if(flag==0)
	        cout<<"YES";
	    else
	        cout<<"NO";
	}
    
    return 0;
}
