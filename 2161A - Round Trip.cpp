#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int R, X, D, n;
        cin >> R >> X >> D >> n;

        string s;
        cin >> s;

        int ans = 0;

        for (char c : s) {
            if (c == '1') {
                ans++;
                R = max(0, R - D);
            }
            else {
                if (R < X) {
                    ans++;
                    R = max(0, R - D);
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
