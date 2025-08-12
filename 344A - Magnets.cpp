#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	cin>>n;
	int magnet, groups=1;
	cin>>magnet;
	int temp = magnet;
	n--;
	while(n--)
	{
	    cin>>magnet;
	    if(temp!=magnet)
	        groups++;
	    temp = magnet;
	}
    cout<<groups;
    
    return 0;
}
