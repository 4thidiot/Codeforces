#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	cin>>n;
	vector <int> v(n);
	
	for(auto &it : v)
	    cin>>it;
    
    vector <int> code, math, pe;
    
    for(int i=0; i<n; i++)
    {
        if(v[i]==1)
            code.push_back(i);
        else if(v[i]==2)
            math.push_back(i);
        else
            pe.push_back(i);
    }
    
    int tsize = min(min(code.size(), math.size()), pe.size()); 
    cout<<tsize<<endl;
    
    for(int i=0; i<tsize; i++)
        cout<<code[i]+1<<" "<<math[i]+1<<" "<<pe[i]+1<<endl;
        
    return 0;    
}
