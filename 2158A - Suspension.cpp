#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,y,r;
    cin >> n;
    cin >> y >> r;
    cout << min(n,r+y/2) << "\n";
}

int main(){
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}