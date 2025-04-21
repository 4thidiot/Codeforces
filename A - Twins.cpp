#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	cin>>n;
	
	vector <int> v(n);
	for(int i=0; i<n; i++)
	    cin>>v[i];
	
	int sum = accumulate(v.begin(), v.end(), 0);
	sum/=2;
	
	sort(v.begin(), v.end());
	reverse(v.begin(), v.end());
	
	int new_sum=0, count=0;
	for(int i=0; i<n; i++)
	{
	    if(new_sum<=sum)
	    {
	        count++;
	        new_sum+=v[i];
	    }
	    else
	        break;
	}
	cout<<count;
    
    return 0;
}
