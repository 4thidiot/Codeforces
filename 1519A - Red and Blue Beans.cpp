#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        long long r, b, d;
        cin >> r >> b >> d;

        long long mn = min(r, b);
        long long mx = max(r, b);

        if (mn * (d + 1) >= mx)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}