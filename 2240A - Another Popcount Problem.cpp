#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long n, k;
        cin >> n >> k;

        long long ans = 0;

        for (long long cost = 1; cost <= n; cost <<= 1) {
            long long take = min(k, n / cost);
            ans += take;
            n -= take * cost;
            if (take < k) break;
        }

        cout << ans << '\n';
    }

    return 0;
}