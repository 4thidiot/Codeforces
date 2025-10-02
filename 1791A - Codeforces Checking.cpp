#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll t;
	cin>>t;
	string check = "codeforces";
	while(t--)
	{
	    char given;
	    cin>>given;
	    int flag=0;
	    for(auto it : check)
	    {
	        if(it==given)
	        {
	            cout<<"YES\n";
	            flag=1;
	            break;
	        }
	    }
	    if(flag==0)
	        cout<<"NO\n";
	}
    return 0;
}
