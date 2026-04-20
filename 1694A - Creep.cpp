# include <bits/stdc++.h>

using namespace std;

int t, A, B;

int main(){

	cin >> t;
	while (t --){
		cin >> A >> B;
		for (int i = 0; i < min(A, B); ++ i)
			cout << "01";
		for (int i = 0; i < abs(A - B); ++ i)
			cout << (A < B ? 1 : 0);
		cout << '\n';
	}

	return 0;
}