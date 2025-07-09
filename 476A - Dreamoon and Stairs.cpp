#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n, m;
	cin>>n>>m;
	
	if(m>n)
	    cout<<-1;
	else
	{
	    int ans = n/2;
	    if(n%2==1)
	        ans++;
	    
	    if(ans%m==0)
	        cout<<ans;
	    else
	    {
	        int change = m-ans%m;
	        ans += change;
	        cout<<ans;
	    }
	}
	
    return 0;
}
