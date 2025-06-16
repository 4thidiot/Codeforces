#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	cin>>n;
	vector <int> v(n);
	for(int i=0; i<n; i++)
    	cin>>v[i];
    sort(v.begin(), v.end());
    
    int q;
    cin>>q;
    while(q--)
    {
        int coins;
        cin>>coins;
        
        int count=0; 
        //Using Binary Search since seedhe loop ki tc is n then q*n=10^10 therefore tle iliye bs ki tc is log(n) so perfect!
        int l = 0;     
        int h = n-1;
        while(l<=h)
        {
            int mid = (l+h)/2;
            
            if(v[mid]>coins)
                h = mid-1;
            else if(v[mid]<=coins)
            {
                count=mid+1;
                l=mid+1;
            }  

        }
        cout<<count<<endl;
    }
    return 0;
}
