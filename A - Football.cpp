#include <bits/stdc++.h>
using namespace std;

int main() 
{
	string s;
	cin>>s;
	
	int count0=0, count1=0, flag=0;
	for(int i=0; i<s.size()-1; i++)
	{
	    if(s[i]==s[i+1] && s[i]=='0')
	        count0++;
	    else if(s[i]==s[i+1] && s[i]=='1')
	        count1++;    
	    
	    if(count0==6 || count1==6)    //jab 7 se ek kam hi hora hai to 6 hi karlo simple
	    {
	        cout<<"YES";
	        flag=1;
	        break;
	    }
	    if(s[i]!=s[i+1])
	    {
	        count0=0;
	        count1=0;
	    }
	}   
	
	if(flag==0)
	    cout<<"NO";
    
    return 0;
}
