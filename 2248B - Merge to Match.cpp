#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);

    for (int &x : a) cin >> x;
    for (int &x : b) cin >> x;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if (n < 2 * m) {
        cout << "NO\n";
        return;
    }

    for (int i = 0; i < m; i++) {
        if (b[i] < a[i] || b[i] > a[n - m + i]) {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}