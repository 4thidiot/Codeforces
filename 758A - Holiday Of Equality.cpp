#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	cin>>n;
	vector <int> v(n);
	for(int i=0; i<n; i++)
	    cin>>v[i];
	    
	int maximum = -1;
	for(int i=0; i<n; i++)
	    maximum = max(maximum, v[i]);  
	
	int burles = 0;
	for(int i=0; i<n; i++)
	    burles += (maximum - v[i]);
    
    cout<<burles;
    
    return 0;
}
