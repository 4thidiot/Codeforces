#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    for(auto &it: s)
	        it = tolower(it);
	    
	    if(s=="yes")
	        cout<<"YES"<<endl;
	    else   
	        cout<<"NO"<<endl;
	}
    return 0;
}
