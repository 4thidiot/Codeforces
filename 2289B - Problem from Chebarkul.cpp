#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n + 1);

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        // pref[i] = number of adjacent unequal pairs
        // among positions 1...i
        vector<int> pref(n + 1, 0);

        for (int i = 1; i < n; i++) {
            pref[i] = pref[i - 1] + (a[i] != a[i + 1]);
        }

        int ans = 0;

        // For position i in the subsequence,
        // possible original indices are:
        // i ... n-k+i
        for (int i = 1; i <= k; i++) {
            int l = i;
            int r = n - k + i;

            // Check whether a[l...r] are all equal.
            // Number of unequal adjacent pairs in [l, r]:
            int unequal = pref[r - 1] - pref[l - 1];

            if (unequal == 0) {
                ans++;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}