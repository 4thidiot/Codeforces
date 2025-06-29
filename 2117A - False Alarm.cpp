#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n, x;
	    cin>>n>>x;
	    vector <int> v(n);
	    for(int i=0; i<n; i++)
	        cin>>v[i];
	        
	    int a=0, b=0;
	    
	    for(int i=0; i<n; i++)
	    {
	        if(v[i]==1)
	            break;  
	        a++;     
	    }
	    
	    for(int i=n-1; i>=0; i--)
	    {
	        if(v[i]==1)
	            break;   
	        b++;     
	    }
	    
	    int count = n-a-b;
	    if(count <= x)
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	}
    return 0;
}
