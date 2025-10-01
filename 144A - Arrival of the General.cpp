#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	cin >> n;
	int maxi, mini, ai;
	int mx = -1, mn = 10000;
	for(int i = 0; i < n; ++i)
	{
		cin >> ai;
		if(ai > mx)
		{
			mx = ai;
			maxi = i;
		}
		if(ai <= mn)
		{
			mn = ai;
			mini = i;
		}
	}	
	if(mini < maxi)
	{
		mini += 1;
		cout << maxi + (n - 1 - mini) << endl;
	}
	else 
	    cout << maxi + (n - 1 - mini) << endl;
	
	return 0;
}
