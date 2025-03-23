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
    	    vector <int> v(n);
    	    for(int i=0; i<n; i++)
                cin>>v[i];
            
            int sum = accumulate(v.begin(), v.end(), 0);
            
            int ans=INT_MAX;
            if(sum%2==0)
                cout<<0<<endl;
            else
            {
                for(int i=0; i<n; i++)
                {
                    int count=0;
                    if(v[i]%2==0) //for even numbers
                    {
                        count=0;
                        while(v[i]%2==0)
                        {
                            count++;
                            v[i]/=2;
                        }
                        ans=min(ans, count);
                    }
                    else //for odd numbers
                    {
                        count=0;
                        while(v[i]%2!=0)
                        {
                            count++;
                            v[i]/=2;
                        }
                        ans=min(ans, count);
                    }
                }
                cout<<ans<<endl;
            }
            
    	}
        return 0;
    }
