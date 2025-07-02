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
	    vector <int> v(n);
	    for(auto &it: v)
	        cin>>it;
	        
	    int ans = -1;
	    
	    for(int i=1; i<n-1; i++)
	    {
	        if(v[i]>v[i-1] && v[i]>v[i+1])
	            ans = 1;
	        if(v[i]<v[i-1] && v[i]<v[i+1])
	            ans = 1;  
	    }
	    
	    for(int i=0 ;i<n-1; i++)
	    {
	        if(abs(v[i]-v[i+1]) <= 1)
	            ans=0;
	    }
	    cout<<ans<<'\n';
	}
    return 0;
}
