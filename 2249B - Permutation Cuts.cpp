#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;
const int MAXN = 1000005;

int a[MAXN];
bool pre[MAXN], suf[MAXN];
int vis[MAXN];

int main() {

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        bool bad = false;
        for (int i = 1; i < n; i++) {
            cin >> a[i];
            if (a[i] == n) bad = true;
        }

        if (bad) {
            cout << 0 << '\n';
            continue;
        }

        pre[0] = true;
        for (int i = 1; i < n; i++)
            pre[i] = pre[i - 1] && (i == 1 || a[i] >= a[i - 1]);

        suf[n] = true;
        for (int i = n - 1; i >= 1; i--)
            suf[i] = suf[i + 1] && (i == n - 1 || a[i] >= a[i + 1]);

        long long ans = 0;

        for (int cut = 0; cut < n; cut++) {
            if (!pre[cut] || !suf[cut + 1]) continue;

            vector<int> L, R;

            for (int i = 1; i <= cut; i++) L.push_back(a[i]);
            for (int i = cut + 1; i < n; i++) R.push_back(a[i]);

            if (!L.empty() && !R.empty() && L.back() == R.front())
                continue;

            reverse(R.begin(), R.end());

            memset(vis, 0, sizeof(int) * (n + 1));

            int x = 0, y = 0;
            int used = 0;
            long long ways = 1;

            while (x < (int)L.size() || y < (int)R.size()) {
                int w;

                if (x == (int)L.size())
                    w = R[y++];
                else if (y == (int)R.size())
                    w = L[x++];
                else if (L[x] < R[y])
                    w = L[x++];
                else if (L[x] > R[y])
                    w = R[y++];
                else {
                    ways = 0;
                    break;
                }

                if (!vis[w]) {
                    vis[w] = 1;
                } else if (w < used) {
                    ways = 0;
                } else {
                    ways = ways * (w - used) % MOD;
                }

                used++;
            }

            ans = (ans + ways) % MOD;
        }

        cout << ans % MOD << '\n';
    }

    return 0;
}