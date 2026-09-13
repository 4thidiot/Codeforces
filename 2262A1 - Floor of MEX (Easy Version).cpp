#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        // diff[x] tells us how the number of forbidden
        // intervals covering x changes.
        vector<int> diff(n + 2, 0);

        for (int k = 1; k <= n; k++) {
            long long l = a[k] * k;
            long long r = (a[k] + 1) * k - 1;

            // Interval is completely outside [0, n-1]
            if (l >= n)
                continue;

            r = min(r, (long long)n - 1);

            diff[l]++;
            diff[r + 1]--;
        }

        vector<int> B;

        int cnt = 0;

        for (int x = 0; x < n; x++) {
            cnt += diff[x];

            // x is not forbidden
            if (cnt == 0) {
                B.push_back(x);
            }
        }

        cout << B.size() << '\n';

        for (int x : B) {
            cout << x << ' ';
        }

        cout << '\n';
    }

    return 0;
}
