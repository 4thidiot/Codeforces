#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int n = s.size();
	    int a = 0; //balance factor
	    bool ans = false;
	    for(int i=0; i<n; i++)
	    {
	        if(s[i] == '(')
	            a++;
	        else
	            a--;
	            
	        if(a==0 && i!=n-1)
	        {
	            ans = true;
	            break;
	        }     
	    }
	    if(ans)
	        cout<<"YES"<<'\n';
	    else
	        cout<<"NO"<<'\n';
	}
    return 0;
}

