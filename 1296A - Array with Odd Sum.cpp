#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	 ll t;
	 cin>>t;
	 while(t--)
	 {
	     ll n;
	     cin>>n;
	     vector <ll> v(n);
	     for(auto &it : v)
	        cin>>it;
	    
	     ll count_o = 0, count_e=0;
	     for(auto it : v)
	     {
	         if(it%2==1)
	            count_o++;
	         else
	            count_e++;
	     }
	     
	     if(count_o%2==1 || (count_o>0 && count_e>0))
	        cout<<"YES\n";
	     else
	        cout<<"NO\n";
	 }
     return 0;
}
