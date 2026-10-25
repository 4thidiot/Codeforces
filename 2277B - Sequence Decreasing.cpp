#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (auto &x : a) cin >> x;

        sort(a.rbegin(), a.rend());

        bool ok = false;

        for (int i = 0; i < n; i++) {
            if (a[i] <= i) {
                ok = true;
                break;
            }
        }

        cout << (ok ? n : 0) << '\n';
    }
}