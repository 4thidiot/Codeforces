#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll d, sumTime;
	cin>>d>>sumTime;
	
	ll d_copy = d;
	
	vector <ll> minTime, maxTime;
	
	while(d_copy--)
	{
	     ll a, b;
	     cin>>a>>b;
	     
	     minTime.push_back(a);
	     maxTime.push_back(b);
	}
	
	ll minSum = accumulate(minTime.begin(), minTime.end(), 0);
	ll maxSum = accumulate(maxTime.begin(), maxTime.end(), 0);
	
	if(sumTime < minSum || sumTime > maxSum)
	    cout<<"NO";
	else
	{
	    cout<<"YES\n";
	    
	    ll need = sumTime - minSum;
	    
	    for(ll i=0; i<d; i++)
	    {
	        if(need <= (maxTime[i]-minTime[i]) )
	        {
	            cout<< minTime[i]+need<<" ";
	            need = 0;
	        } 
	        else
	        {
	            cout<<maxTime[i]<<" ";
	            need -= maxTime[i] - minTime[i];
	        }
	    }
	}
    
    return 0;
}
