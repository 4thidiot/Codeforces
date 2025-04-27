#include <bits/stdc++.h>
using namespace std;

int main() 
{
	string s;
	cin>>s;
	
	int count_big=0;
	for(int i=0; i<s.size(); i++)
	{
	    if(s[i]>64 && s[i]<91)
	        count_big++;
	}
	if(count_big==s.size())
	    transform(s.begin(), s.end(), s.begin(), ::tolower); 
	else if(count_big==s.size()-1 && s[0]>96 && s[0]<123)
	{
	    transform(s.begin(), s.end(), s.begin(), ::tolower); 
	    s[0]-=32;
	}
    
    cout<<s;
    
    return 0;
}
