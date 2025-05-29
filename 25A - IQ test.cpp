#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	cin>>n;
	vector <int> v(n);
	for(int i=0; i<n; i++)
	    cin>>v[i];
	
	int count_e=0, count_o=0;
	for(int i=0; i<n; i++)
	{
	    if(v[i]%2==0)
	        count_e++;
	    else
	        count_o++;
	}
	if(count_o>count_e)
	{
	    for(int i=0; i<n; i++)
	    {
	        if(v[i]%2==0)
	        {
	            cout<<i+1;
	            break;
	        }
	    }
	}
	else
	{
	    for(int i=0; i<n; i++)
	    {
	        if(v[i]%2!=0)
	        {
	            cout<<i+1;
	            break;
	        }
	    }
	}
}
