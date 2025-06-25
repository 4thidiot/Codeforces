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
	    vector <int> v(n+1, 0);
	    int count = 1;
	    for(int i=1; i<=n/2; i++)  
	    {
	        v[i]=count;
	        count++;
	        v[n-i+1]=count;
	        count++;
	    }
	    if(n%2!=0)
	        v[ceil(n/2.0)]=n;
	        
	    for(int i=1; i<=n; i++)
	        cout<<v[i]<<" ";
	    cout<<endl;     
	}
    return 0;
}
