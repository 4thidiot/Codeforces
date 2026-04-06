#include <bits/stdc++.h>

using namespace std;

int main(){
	int t; //read the number of test cases
	cin >> t;
	while(t--){
		int n; //read n
		cin >> n;
		for(int i=0; i< n; i++)cout << i*2+1 << " "; //write the first n odd numbers in order
		cout << '\n';
	}
}
