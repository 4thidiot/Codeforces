#include <iostream>
#include<string>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--){
		string s;
		cin>>s;
		int len=s.length();
		string ans="";
		for(int i=0;i<len;i++){
		if(i%2==0){
			ans+=s[i];
		}
		
	}
	ans+=s[len-1];
	cout<<ans<<endl;
	}
	

	
	return 0;
}
