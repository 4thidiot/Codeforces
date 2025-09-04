#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n, m;
	    cin>>n>>m;
	    vector <int> v(7, 0);
	    for(int i=0; i<n; i++)
	    {
	        char c;
	        cin>>c;
	        v[c-'A']++;
	    }
	    
	    int ans = 0;
	    for(int i=0; i<7; i++)
	        ans += max( m-v[i], 0 );
	    
	    cout<<ans<<'\n';
	}
    return 0;
}
