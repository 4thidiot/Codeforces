#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int a;
    cin >> a;
    if ((a >= 102 && a <= 109) || (a >= 1010 && a <= 1099))
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() 
{
    int t;
    cin >> t;
    while (t--) 
          solve();

    return 0;
}