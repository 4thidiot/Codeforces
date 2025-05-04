#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	cin>>n;
	map <string, int> m;
	while(n--)
	{
	    string s;
	    cin>>s;
	    m[s]++;
	}
	
	int maximum=0;
	string answer;
	for(auto it:m)
	{
	    maximum = max(maximum, it.second);
	    if(maximum == it.second)
	        answer = it.first;    
	}
	    
	cout<<answer;    

}
