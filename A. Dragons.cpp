#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int s, n;
	cin>>s>>n;
	pair <int, int> p[n];
	for(int i=0; i<n; i++)
        cin>>p[i].first>>p[i].second;
        
    sort(p, p+n);
    
    for(int i=0; i<n; i++)
    {
        if(s<=p[i].first)
        {
            cout<<"NO\n";
            return 0; //break
        }
        else
            s+=p[i].second;
    }
    cout<<"YES\n";
    
    return 0;
}
