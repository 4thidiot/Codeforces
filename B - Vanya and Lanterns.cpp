#include <bits/stdc++.h>
using namespace std;

int main() 
{
	double n, l;
	cin>>n>>l;
	vector <double> v(n);
	
	for(int i=0; i<n; i++)
	    cin>>v[i];
	
	sort(v.begin(), v.end());    
	
	double maximum = INT_MIN;
	for(int i=0; i<n-1; i++)
	    maximum = max(maximum, v[i+1]-v[i]); 
	
	if(v[0]!=0 || v[n-1]!=l)
	{
	    maximum /= 2.0;
	    maximum = max(maximum, v[0]-0.0f);
	    maximum = max(maximum, l-v[n-1]);
	    cout<<fixed<<setprecision(9)<<maximum;
	}
	else
	{
	    maximum/=2.0;
	    cout<<fixed<<setprecision(9)<<maximum;
	}    

}
