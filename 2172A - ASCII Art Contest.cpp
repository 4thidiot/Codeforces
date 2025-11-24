#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	vector <ll> v(3);
	for(auto& it : v)
	    cin>>it;
	
    sort(v.begin(), v.end());
    if(v[2]-v[0]<10)
        cout<<"final "<<v[1]<<'\n';
    else
        cout<<"check again\n";
        
    return 0;
}
