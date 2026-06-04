#include <bits/stdc++.h>     
using namespace std;
#define ll long long
void solve(){ 
    ll n; cin>>n;
    vector<ll> a(2*n);
    ll ans=0;
    for(auto &it:a){
        cin>>it;
    }
    sort(a.begin(),a.end());
    for(ll i=0;i<2*n;i+=2){
        ans+=a[i];
    }
    cout<<ans<<"\n";
    return;  
}                                       
int main()                                                                               
{                                 
    #ifndef ONLINE_JUDGE                   
    freopen("input.txt", "r", stdin);                                           
    freopen("output.txt", "w", stdout);      
    freopen("error.txt", "w", stderr);                        
    #endif     
    ll test_cases=1;                 
    cin>>test_cases;
    while(test_cases--){
        solve();
    }
    cout<<fixed<<setprecision(10);
    cerr<<"Time:"<<1000*((double)clock())/(double)CLOCKS_PER_SEC<<"ms\n"; 
}  