#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t, a, b, x, y;
    cin >> t >> a >> b >> x >> y;

    auto calc = [&](int t, int a, int b, int x, int y) {
        int cur = 0;
        int k = max((t - a + x) / x, 0);
        cur += k;
        t -= k * x;
        cur += max((t - b + y) / y, 0);
        return cur;
    };

    cout << max(calc(t, a, b, x, y), calc(t, b, a, y, x)) << '\n';
}

int main() {
    int q;
    cin >> q;
    while (q--) {
        solve();
    }
    return 0;
}
