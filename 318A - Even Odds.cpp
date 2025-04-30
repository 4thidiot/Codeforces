#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll n, k;
	cin>>n>>k;
	
	n = ceil(n/2.0);
	
	if(k>n)
        cout<<2*(k-n);
    else
        cout<<2*k-1;   
}
