#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    
	    vector <char> v;
	    for(int i=0; i<n-1; i++)
	    {
	        if(s[i+1]==s[i] || s[i+1]==s[i]+32 || s[i+1]==s[i]-32)
	            continue;
	        else
	            v.push_back(s[i]);
	    }
	    
	    if(v.size()>1 && v[v.size()-1] != s[n-1])
	        v.push_back(s[n-1]);
	        
	    for(int i=0; i<v.size(); i++)
	    {   
	        if(v[i]>64 && v[i]<91)
	            v[i]+=32;
	    }
        
        if(v.size()==4 && v[0]=='m' && v[1]=='e' && v[2]=='o' && v[3]=='w')
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
	}

}
