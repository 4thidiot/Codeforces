#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll n, m, a, ans;
	cin>>n>>m>>a;
	
	ans = ceil(n*1.0/a)*ceil(m*1.0/a); 
	cout<<ans; //imp direct mein convert nhi ho rha in correct format
    
    return 0;
}
