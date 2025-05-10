#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n, m;
	cin>>n>>m;
	vector <int> v(m);
	for(int i=0; i<m; i++)
	    cin>>v[i];
    
    sort(v.begin(), v.end());
    
    int minimum = INT_MAX;
    for(int i=0; i<=(m-n); i++)
    {
        minimum = min(minimum, (v[n-1+i]-v[i]));
    }
    
    if(minimum==INT_MAX)
        minimum=0;
        
    cout<<minimum;
    
    return 0;
}
