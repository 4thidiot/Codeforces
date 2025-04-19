#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	int sum_a=0, sum_b=0, sum_c=0;
	while(t--)
	{
	    int a, b, c;
	    cin>>a>>b>>c;
	    
	    sum_a+=a;
	    sum_b+=b;
	    sum_c+=c;
	}
    if(sum_a==0 && sum_b==0 && sum_c==0)
        cout<<"YES";
    else 
        cout<<"NO";
        
    return 0;    
}
