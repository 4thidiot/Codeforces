#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n, m;
	cin>>n>>m;
	
	if(m%n!=0)
	    cout<<-1;
	else
	{
	    int count=0;
	    m/=n;
	    while(m%2==0)
	    {
	        count++;
	        m/=2;
	    }
	    while(m%3==0)
	    {
	        count++;
	        m/=3;
	    }
	    
	    if(m==1)
	        cout<<count;
	    else 
	        cout<<-1;
	}
    return 0;
}
