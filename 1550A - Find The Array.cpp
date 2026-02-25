#include <bits/stdc++.h>
using namespace std;

long long getAns(long long x) {
    long long r = sqrtl(x);   // floor of sqrt
    
    if (r * r < x) 
        r++;                  // make it ceil if needed
        
    return r;
}

int main() {
   

    int t;
    cin >> t;

    while (t--) {
        long long x;
        cin >> x;
        cout << getAns(x) << "\n";
    }

    return 0;
}