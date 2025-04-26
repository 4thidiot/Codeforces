#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int a, b, c;
	cin>>a>>b>>c;
	
	int maximum=INT_MIN;
    
    maximum = max(maximum, a+b*c);
    maximum = max(maximum, a*b*c);
    maximum = max(maximum, a+b+c);
    maximum = max(maximum, a*b+c);
    maximum = max(maximum, a*(b+c));
    maximum = max(maximum, (a+b)*c);
    
    cout<<maximum;
}
