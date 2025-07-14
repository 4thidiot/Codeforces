#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n, k;
	cin>>n>>k;
	
	vector <int> v(n);
	
	for(auto& it: v)
	    cin>>it;
	    
    sort(v.begin(), v.end());
    
    if(k==0 && v[0]==1)
        cout<<-1;
    else if(k==0)
        cout<<1;
    else if(k==n || v[k-1]!=v[k])
        cout<<v[k-1];
    else
        cout<<-1;
	    
    return 0;
}
