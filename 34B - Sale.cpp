#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n, m;
	cin>>n>>m;
	vector <int> v(n);
	for(int i=0; i<n; i++)
	    cin>>v[i];
	
	sort(v.begin(), v.end());
	
	int i=0, sum=0;
	while(m--)
	{
	    if(v[i]<0)
	        sum-=v[i];
	    i++;     
	}
    cout<<sum<<endl;
    
    return 0;
}
