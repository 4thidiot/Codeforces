#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	cin>>n;
	vector <int> v1(n), v2(n-1), v3(n-2);
	
	for(int i=0; i<n; i++)
	    cin>>v1[i];
	int v1_sum = accumulate(v1.begin(), v1.end(), 0);
	
    for(int i=0; i<n-1; i++)
	    cin>>v2[i];
	int v2_sum = accumulate(v2.begin(), v2.end(), 0);
	
	for(int i=0; i<n-2; i++)
	    cin>>v3[i];
	int v3_sum = accumulate(v3.begin(), v3.end(), 0);
	
	
	cout<<v1_sum - v2_sum<<'\n'<<v2_sum - v3_sum;
	
	
	return 0;
}
