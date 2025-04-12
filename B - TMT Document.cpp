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
	    vector <char> v(n);
	    int countT=0, countM=0;
	    for(int i=0; i<n; i++)
	    {
	        cin>>v[i];
	        if(v[i]=='M')
	            countM++;
	        else 
	            countT++;
	    }
	    
	    if(countT != 2*countM)
	        cout<<"NO"<<endl;
	    else
	    {
	        int t=0, m=0, flag=0;
	        for(int i=0; i<n; i++)
	        {
	            if(v[i]=='T')
	                t++;
	            else
                {
                    m++;
                
                    if(t < m)
	                {
	                    flag=1;
	                    break;
	                }
                }     
	        }
	        if(flag==1)
	        {
	            cout<<"NO"<<endl;
	            continue;
	        }  
	        
	        t=0;
	        m=0;
	        flag=0;
	        for(int i=n-1; i>=0; i--)
	        {
	            if(v[i]=='T')
	                t++;
	            else
                {
                    m++;
                
                    if(t < m)
	                {
	                    flag=1;
	                    break;
	                }
                }     
	        }
	      
	        if(flag==1)
	            cout<<"NO"<<endl;
	        else
	            cout<<"YES"<<endl;
	    }
	}
	return 0;
}
