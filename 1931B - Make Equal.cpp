#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (auto &x : a) cin >> x;

        long long k = accumulate(a.begin(), a.end(), 0LL) / n;

        bool ok = true;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] < k) {
                ok = false;
                break;
            }
            a[i + 1] += a[i] - k;
            a[i] = k;
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}