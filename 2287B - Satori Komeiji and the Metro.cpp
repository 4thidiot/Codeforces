#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<long long> a(n + 1), pref(n + 1, 0);

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            pref[i] = pref[i - 1] + a[i];
        }

        long long total = pref[n];
        long long ans = total;

        int r = 1;

        for (int l = 1; l <= n; l++) {

            // Need:
            // pref[r] >= (total + pref[l-1]) / 2
            // i.e. 2 * pref[r] >= total + pref[l-1]
            r = max(r, l);

            while (r < n &&
                   2LL * pref[r] < total + pref[l - 1]) {
                r++;
            }

            // Check r
            {
                long long train2 =
                    pref[l - 1] + total - pref[r];

                long long train1Left = pref[r];
                long long train1Right =
                    total - pref[l - 1];

                long long cur = max({
                    train2,
                    train1Left,
                    train1Right
                });

                ans = min(ans, cur);
            }

            // Also check r-1, because optimum can be just before
            // the two values cross.
            if (r - 1 >= l) {
                int x = r - 1;

                long long train2 =
                    pref[l - 1] + total - pref[x];

                long long train1Left = pref[x];
                long long train1Right =
                    total - pref[l - 1];

                long long cur = max({
                    train2,
                    train1Left,
                    train1Right
                });

                ans = min(ans, cur);
            }
        }

        cout << ans << '\n';
    }

    return 0;
}