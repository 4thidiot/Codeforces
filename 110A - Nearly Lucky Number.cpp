#include <bits/stdc++.h>
using namespace std;

int main() {

string s;
cin>>s;
int counter=0;
int len=s.length();
 int four=count(s.begin(),s.end(),'4');
 int seven=count(s.begin(),s.end(),'7');
 if((four+seven==4||four+seven==7))
	 cout<<"YES";
 else
 cout<<"NO";


	return 0;
}
