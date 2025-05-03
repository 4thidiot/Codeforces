#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	cin>>n;
	
	vector <int> v(n);
	for(int i=0; i<n; i++)
	    cin>>v[i];
	
	int subsegment=0, maximum=0;
	for(int i=0; i<n; i++)
	{
	    if(v[i]<=v[i+1] && i<n-1)
	        subsegment++;
	    if (v[i]>v[i+1] || i==n-1)
	    {
	        subsegment++;
	        maximum = max(maximum, subsegment);
	        subsegment=0;  
	    }     
	}
	
	cout<<maximum;
    return 0;
}   
