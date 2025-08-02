#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    string needed = "abc";
	    string given;
	    
	    cin>>given;
	    
	    int displaced = 0;
	    for(int i=0; i < 3; i++)
	    {
	        if(needed[i] != given[i])
	            displaced++;
	    }
	    
	    if(displaced > 2)
	        cout<<"NO\n";
	    else
	        cout<<"YES\n";
	}
    return 0;
}
