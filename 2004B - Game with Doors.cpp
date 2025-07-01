#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int l1, r1;
	    cin>>l1>>r1;
	    int l2, r2;
	    cin>>l2>>r2;
	    
	    
	    int l = max(l1,l2);
	    int r = min(r1,r2);
	    
	    int common = r-l;
	    
	    if(common<0)  
	    {
	        cout<<1<<'\n';
	        continue;
	    }
	    
	    if( min(l1,l2) < l)
	        common++;
	    if( max(r1,r2) > r)
	        common++;
	        
	    cout<<common<<'\n';     
	}
    return 0;
}   
