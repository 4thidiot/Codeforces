#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<pair<long long, long long>> need(21);

    for (int L = 1; L <= 20; L++) {
        long long s1 = 0, s2 = 0;
        for (int i = 0; i < L; i++) {
            long long sz = 1LL << i;
            if (i % 2 == 0)
                s1 += sz;
            else
                s2 += sz;
        }
        need[L] = {s1, s2};
    }

    int T;
    cin >> T;

    while (T--) {
        long long a, b;
        cin >> a >> b;

        int ans = 0;
        for (int L = 1; L <= 20; L++) {
            long long x = need[L].first;
            long long y = need[L].second;

            if ((a >= x && b >= y) || (a >= y && b >= x))
                ans = L;
            else
                break;
        }

        cout << ans << "\n";
    }

    return 0;
}