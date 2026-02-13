#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, s, m;
    cin >> n >> s >> m;

    vector<pair<long long, long long>> segs;
    segs.push_back({0, 0});
    segs.push_back({m, m});

    for (int i = 0; i < n; i++) {
        long long l, r;
        cin >> l >> r;
        segs.push_back({l, r});
    }

    sort(segs.begin(), segs.end());

    for (int i = 1; i <= n + 1; i++) {
        if (segs[i].first - segs[i - 1].second >= s) {
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
}

int main() 
{
    int t;
    cin >> t;
    while (t--) {
        solve();
}
}