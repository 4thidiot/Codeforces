#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int l, a, b;
        cin >> l >> a >> b;

        int x = gcd(l, a);
        int y = gcd(l, b);

        int common = lcm(x, y);

        cout << l / common << '\n';
    }

    return 0;
}