#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long> a(n);
    long long sum = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a[i] = 1LL << x;
        sum += a[i];
    }

    long long lim = sum / 2;
    long long x = 0;

    sort(a.rbegin(), a.rend());

    for (long long v : a) {
        if (x + v <= lim)
            x += v;
    }

    cout << x * (sum - x) << '\n';
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}