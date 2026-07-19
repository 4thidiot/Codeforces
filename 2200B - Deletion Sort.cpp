#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i: a) cin >> i;

    if (is_sorted(a.begin(), a.end())) cout << n << '\n';
    else cout << "1\n";
}

signed main() {
    int t = 1;
    cin >> t;
    while (t--) solve();
}