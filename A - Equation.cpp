#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	cin>>n;
	
	if(n==1)
	    cout<<"9 8";
	else 
        cout<<3*n<<" "<<2*n; //Since 2 composite nhi hai to wo nhi output karsakte in any scenario
    
    return 0;
}
