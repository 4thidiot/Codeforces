#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    int a, b, c, d;
    	cin >> a >> b >> c >> d;
    	string s;
    	for (int i = 1; i <= 12; i++) {
    		if (i == a || i == b) {s += "a";}
    		if (i == c || i == d) {s += "b";}
    	}
    	cout << (s == "abab" || s == "baba" ? "YES\n" : "NO\n");
	}

}
