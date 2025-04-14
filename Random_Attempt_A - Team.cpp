#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	cin>>n;
	int problems = 0;
	while(n--)
	{
	    int a, b, c;
	    cin>>a>>b>>c;
        
        int surity=0;	    
	    if(a==1)
	        surity++;
	    if(b==1)
	        surity++;
	    if(c==1)
	        surity++;
	        
	    if(surity>1)
	        problems++;
	}
    cout<<problems;
    
    return 0;
}
