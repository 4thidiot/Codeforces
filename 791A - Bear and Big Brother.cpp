#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int a, b;
	cin>>a>>b;
	int flag=0, yrs=0;
	
	while(flag==0)
	{
	    if(a>b)
	    {
	        flag=1;
	        break;
	    }
	    a=3*a;
	    b=2*b;
	    yrs++;
	}
    cout<<yrs; 
}
