#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long x, y;
        cin >> x >> y;

        long long z = x - 2 * y;

        if (z < 0 || z % 3 != 0) {
            cout << "NO\n";
            continue;
        }

        long long n = z / 3;

        if (n >= 2 * max(0LL, -y))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}