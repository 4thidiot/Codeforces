#include <bits/stdc++.h>
using namespace std;

using int64 = long long;

int main() {

    int T;
    cin >> T;

    while (T--) {
        int64 n;
        cin >> n;

        int64 x = n;
        int64 ans = 1;

        for (int64 p = 2; p * p <= x; p++) {
            if (x % p == 0) {
                int cnt = 0;
                while (x % p == 0) {
                    x /= p;
                    cnt++;
                }

                int need = (cnt + n - 1) / n; // ceil(cnt / n)

                while (need--) ans *= p;
            }
        }

        if (x > 1) {
            int need = (1 + n - 1) / n; // always 1
            while (need--) ans *= x;
        }

        cout << ans << '\n';
    }

    return 0;
}