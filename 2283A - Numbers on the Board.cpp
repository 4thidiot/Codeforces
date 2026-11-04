
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int l, r;
        cin >> l >> r;

        int n = r - l + 1;
        int keep = 1;

        if (l <= 0 && r >= 0) {
            int mn = min(-l, r);

            keep = 1 + 2 * mn;

            if (l < -mn || r > mn)
                keep++;
        }

        cout << n - keep << '\n';
    }

    return 0;
}
