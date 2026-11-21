#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x, y, m;
    cin >> x >> y >> m;

    string s;
    cin >> s;

    // dp[a][b] = can we have a power-1 stones
    // and b power-2 stones after current prefix?
    bool dp[105][105] = {};

    dp[x][y] = true;

    int ans = x + y;

    for (char c : s) {
        bool ndp[105][105] = {};

        for (int a = 0; a <= 100; a++) {
            for (int b = 0; b <= 100; b++) {
                if (!dp[a][b]) continue;

                if (a + b == 0) continue;

                if (c == '+') {
                    // Choose a power-1 stone:
                    // 1 -> 2
                    if (a > 0)
                        ndp[a - 1][b + 1] = true;

                    // Choose a power-2 stone:
                    // 2 -> 2, and a new power-2 appears
                    if (b > 0)
                        ndp[a][b + 1] = true;
                }
                else {
                    // Choose a power-1 stone:
                    // 1 -> disappears
                    if (a > 0)
                        ndp[a - 1][b] = true;

                    // Choose a power-2 stone:
                    // 2 -> 1
                    if (b > 0)
                        ndp[a + 1][b - 1] = true;
                }
            }
        }

        memcpy(dp, ndp, sizeof(dp));

        // We may stop after this prefix.
        for (int a = 0; a <= 100; a++) {
            for (int b = 0; b <= 100; b++) {
                if (dp[a][b])
                    ans = max(ans, a + b);
            }
        }
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}