#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        long long c;
        cin >> n >> c;

        multiset<long long> s;

        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            s.insert(x);
        }

        int ans = 0;

        for (int i = 0; i < n; i++) {
            long long p = 1LL << i;
            long long lim = c / p;

            auto it = s.upper_bound(lim);

            if (it != s.begin()) {
                --it;
                s.erase(it);       // destroy for free
            } 
            else {
                // No bag can be destroyed for free now.
                ans += s.size();
                break;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
