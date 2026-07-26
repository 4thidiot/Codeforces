#include <bits/stdc++.h>
using namespace std;

bool check(int m, const vector<array<int,4>>& a) {
    int last = 0;

    for (auto &x : a) {
        int l = x[0], r = x[1], u = x[2], v = x[3];

        int L1 = l, R1 = r;
        int L2 = m - v + 1;
        int R2 = m - u + 1;

        int p = last + 1;

        while (true) {
            bool moved = false;

            if (L1 <= p && p <= R1) {
                p = R1 + 1;
                moved = true;
            }
            if (L2 <= p && p <= R2) {
                p = R2 + 1;
                moved = true;
            }

            if (!moved) break;
        }

        if (p <= m) last = p;
        if (last == m) return true;
    }

    return false;
}

void solve() {
    int n;
    cin >> n;

    vector<array<int,4>> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i][0] >> a[i][1] >> a[i][2] >> a[i][3];

    int lo = 0, hi = n;

    while (lo < hi) {
        int mid = (lo + hi + 1) / 2;
        if (check(mid, a))
            lo = mid;
        else
            hi = mid - 1;
    }

    cout << lo << '\n';
}

int main() {
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}