#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	cin>>n;
	
	vector <int> h(n), a(n);
	
	for(int i=0; i<n; i++)
	    cin>>h[i]>>a[i];
    
    int count = 0;
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(h[i]==a[j])
                count++;
        }
    }
    
    cout<<count<<'\n';
    return 0;
}
