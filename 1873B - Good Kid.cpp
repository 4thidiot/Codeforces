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
	    vector <int> v(n);
	    for(auto& it : v)
	        cin>>it;
	    
	    sort(v.begin(), v.end());
	    
	    v[0]++;
	    int ans = 1;
	    for(int i=0; i<n; i++)
	        ans *= v[i];
	        
	    cout<<ans<<'\n';
	}
    return 0;
}
