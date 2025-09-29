#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll n;
	cin>>n;
	vector <int> v(n);
	for(int i=0; i<n; i++)
	    cin>>v[i];
	    
    int mini = v[0];
    int maxi = v[0];
    
    int amazing = 0;     
    for(int i=1; i<n; i++)  
    {
        if(v[i]<mini)
        {
            mini = v[i];
            amazing++;
        }
        else if(v[i]>maxi)
        {
            maxi = v[i];
            amazing++;
        }
    }
    cout<<amazing;
    
    return 0;
}
