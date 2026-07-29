#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<int> l(n + 1), r(n + 1), u(n + 1), v(n + 1);

        for (int i = 1; i <= n; i++)
            cin >> l[i] >> r[i] >> u[i] >> v[i];

        auto check = [&](int m) {
            int j = 1;

            for (int i = 1; i <= n && j <= m; i++) {
                int rightRank = m - j + 1;

                if ((j < l[i] || j > r[i]) &&
                    (rightRank < u[i] || rightRank > v[i])) {
                    j++;
                }
            }

            return j == m + 1;
        };

        int ans = 0;
        for (int m = n; m >= 1; m--) {
            if (check(m)) {
                ans = m;
                break;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}