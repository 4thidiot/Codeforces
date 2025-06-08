#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int count_a=0, count_d=0;
	for(int i=0; i<s.size(); i++)
	{
	    if(s[i]=='D')
	        count_d++;
	    else
	        count_a++;
	}
    
    if(count_a>count_d)
        cout<<"Anton";
    else if(count_a<count_d)
        cout<<"Danik";
    else
        cout<<"Friendship";
        
    return 0;    
}
