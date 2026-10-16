#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        long long x, y;
        cin >> n >> x >> y;

        vector<long long> a(n);
        long long sum = 0;

        for (auto &v : a) {
            cin >> v;
            sum += (v / x) * y;
        }

        long long ans = 0;

        for (int i = 0; i < n; i++) {
            long long cur = a[i] + sum - (a[i] / x) * y;
            ans = max(ans, cur);
        }

        cout << ans << '\n';
    }

    return 0;
}