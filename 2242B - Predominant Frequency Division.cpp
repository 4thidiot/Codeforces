#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        vector<int> p1(n + 1), p2(n + 1);

        for (int i = 0; i < n; i++) {
            cin >> a[i];

            p1[i + 1] = p1[i] + (a[i] == 1 ? 1 : -1);
            p2[i + 1] = p2[i] + (a[i] == 3 ? -1 : 1);
        }

        int mn = 1e9;
        bool ok = false;

        for (int i = 1; i < n; i++) {

            // p2[i] - mn >= 0
            // means middle part satisfies:
            // ones + twos >= threes
            if (p2[i] >= mn) {
                ok = true;
                break;
            }

            // This prefix can be the left part
            // ones >= twos + threes
            if (p1[i] >= 0) {
                mn = min(mn, p2[i]);
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}