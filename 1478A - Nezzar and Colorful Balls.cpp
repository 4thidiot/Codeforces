#include<bits/stdc++.h>
using namespace std;
 
#define rep(i,n) for (int i=0;i<(int)(n);++i)
#define rep1(i,n) for (int i=1;i<=(int)(n);++i)
#define range(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define pb push_back
#define F first
#define S second
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<int> vi;
 
const int maxn=200007;
int t,n;
int cnt[maxn];
int main(){
    cin>>t;
    while (t--){
        cin>>n;
        rep1(i,n) cnt[i]=0;
        rep1(i,n){
            int u;
            cin>>u;
            cnt[u]++;
        }
        int mx=0;
        rep1(i,n) mx=max(mx,cnt[i]);
        cout<<mx<<"\n";
    }
    return 0;
}