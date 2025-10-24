#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    string pi = "31415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
	    string n;
	    cin>>n;
	    for(int i=0; i<31; i++)
	    {
	        if(pi[i]!=n[i])
	        {
	            cout<<i<<'\n';
	            break;
	        }
	            
	    }
	    
	}
    return 0;
}
