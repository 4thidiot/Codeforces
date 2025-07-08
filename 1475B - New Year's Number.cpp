#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    if(n % 2020 == 0 || n % 2021 == 0)
	        cout<<"YES\n";
	    else
	    {
	        int copy = n;
	        while(copy >= 2020)
	            copy -= 2020; //at the end copy=cnt_2021
	            
	        int cnt_2020_left = n - 2021*copy;
	        
	        if(cnt_2020_left > 0 && cnt_2020_left % 2020 == 0)
	            cout<<"YES\n";
	        else
	            cout<<"NO\n";
	    }
	}
    return 0;
}
