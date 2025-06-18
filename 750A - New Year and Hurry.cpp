#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n, k;
	cin>>n>>k;
	
	int tleft = 240-k;
	
	int sum = 0;
	int ans=0;
	
	for(int i=1; i<=n; i++)
	{
        sum += i*5;
        if(tleft>=sum)
            ans = i;
        else
            break;
	}
	cout<<ans;
    
    return 0;
}
