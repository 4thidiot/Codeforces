#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n, m;
	cin>>n>>m;
	map <string, string> final;
	
	for(int i=0; i<m; i++)
	{
	    string a, b;
	    cin>>a>>b;
	    if(b.length() < a.length())
	    {
	        final[a] = b;
	        final[b] = b;
	    }     
	    else
	    {
	        final[a] = a;
	        final[b] = a;
	    }     
	}
	
	for(int i=0; i<n; i++)
	{
	    string p;
	    cin>>p;
	    cout<<final[p]<<" ";
	}
    return 0;
}
