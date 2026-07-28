#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<int> to(n + 1);

        for (int i = 1; i <= n; i++) {
            if (s[i - 1] == 'L')
                to[i] = i - 1;
            else
                to[i] = i + 1;
        }

        vector<bool> vis(n + 1, false);
        int cur = 1;
        vis[1] = true;

        for (int i = 0; i < n; i++) {
            cur = to[cur];
            vis[cur] = true;
        }

        int ans = 0;
        for (int i = 1; i <= n; i++)
            ans += vis[i];

        cout << ans << "\n";
    }

    return 0;
}