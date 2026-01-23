#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int q;
    cin >> q;
    while (q--) {
        int h, m;
        cin >> h >> m;
        cout << 1440 - h * 60 - m << '\n';
    }
    return 0;
}