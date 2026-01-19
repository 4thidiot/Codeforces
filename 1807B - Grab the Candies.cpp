#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    cin >> n;
    int x, odd = 0, even = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        if(x%2 == 0)
        {
            even+=x;
        }
        else
        {
            odd+=x;
        }
    }
    if(even > odd)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
 
int main(){
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
 