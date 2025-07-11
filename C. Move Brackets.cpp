#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    
	    int irregular_brackets = 0, ans=0;
	    
	    for(int i=0; i<n; i++)
	    {
	        if(s[i]=='(')
	            irregular_brackets++;
	        else
	            irregular_brackets--;
	            
	        ans = min(ans, irregular_brackets);
	    }
	    cout<<abs(ans)<<'\n';
	}
    return 0;
}
