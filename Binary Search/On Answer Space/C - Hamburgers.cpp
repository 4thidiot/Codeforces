#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	string s;
	cin>>s;
	ll nb, ns, nc;
	cin>>nb>>ns>>nc;
	ll pb, ps, pc;
	cin>>pb>>ps>>pc;
	ll ruble;
	cin>>ruble;
	
	ll count_bread = 0, count_sauce = 0, count_cheese = 0; //galti se in full questions sausage ko sauce likh diya
	for(int i=0; i<s.size(); i++)
	{
	    if(s[i]=='B')
	        count_bread++;
	    else if(s[i]=='S')
	        count_sauce++;
	    else 
	        count_cheese++;
	}
    
    ll low = 0;
    ll high = ruble + 100; //100 since max whi to max burger ho sakte hai without spending
    ll ans = 0;
    
    while(low<=high)
    {
        ll mid = (high+low)/2;
        
        ll bread_req = mid*count_bread;
        ll sauce_req = mid*count_sauce;
        ll cheese_req = mid*count_cheese;
        
        ll money = ruble;
        
        money -= max(0ll, (bread_req-nb)*pb);
        money -= max(0ll, (sauce_req-ns)*ps);
        money -= max(0ll, (cheese_req-nc)*pc);
        
        if(money>=0)
        {
            ans = max(ans, mid);
            low = mid+1;
        }
        else
            high = mid-1;
    }
        cout<<ans;
        
        return 0;
}
