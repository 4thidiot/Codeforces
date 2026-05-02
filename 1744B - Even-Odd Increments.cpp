#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        int sum = 0, even = 0, odd = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            sum += x;
            if (x & 1) odd++;
            else even++;
        }

        while (q--) {
            int type, x;
            cin >> type >> x;

            if (type == 0) {
                sum += even * x;
                if (x & 1) odd += even, even = 0;
            } else {
                sum += odd * x;
                if (x & 1) even += odd, odd = 0;
            }

            cout << sum << '\n';
        }
    }
}
