#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    int row=1, col=1;
	for(int i=1; i<=5; i++)
	{
	    for(int j=1; j<=5; j++)
	    {
	        int ele;
	        cin>>ele;
	        if(ele==1)
	        {
	            row=i;
	            col=j;
	        }
	            
	    }
	}
    
    cout<<abs(row-3) + abs(col-3);
    
    return 0;
}
