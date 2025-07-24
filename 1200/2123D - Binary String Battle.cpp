#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n, k;
	    cin >> n >> k;
	    string s;
	    cin >> s;
	    
	    int count = 0;
	    for(auto& it : s)
	    {
	        if(it=='1')
	            count++;
	    }
	    
	    if(count <= k || n < 2*k)
	        cout<<"Alice\n";
        else
            cout<<"Bob\n";
	}
    return 0;
}
