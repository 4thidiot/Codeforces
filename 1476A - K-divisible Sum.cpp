#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    ll n, k;
	    cin>>n>>k;
	    
	    if(k>=n)
	    {
	        int a=k/n;
	        int b = k%n;
	        if(b!=0)
	            a++;    
	        cout<<a<<endl;
	    }
	    else
	    {
	        ll c=n/k;
	        ll d = n%k;
	        if(d!=0)
	            c++;
	        k *= c;
	        
	        int a=k/n;
	        int b = k%n;
	        if(b!=0)
	            a++;    
	        cout<<a<<endl;
	            
	    }
	}
    return 0;
}
