#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	
	int n, t, winners, losers, ans;
	
	cin >> t;
	
	while(t--) {
	   cin >> n;
	   winners = n;
	   losers = 0;
	   ans = 0;
	   
	   while(max(losers, winners) > 1) {
	       ans += losers/2;
	       losers = (losers+1)/2;
	       
	       ans += winners/2; 
	       losers += winners/2; 
	       winners++;
	       winners /= 2;
	   }
	   
	   ans++;
	   
	   cout << ans << "\n";
	}
}