#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        set<long long> s;

        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            s.insert(x);
        }

        long long k = s.size();

        auto it = s.lower_bound(k);

        if (it != s.end()) {
            cout << *it << '\n';
        } else {
            long long ans = k + (1000000000000000000LL - n - 1);
            cout << ans << '\n';
        }
    }

    return 0;
}