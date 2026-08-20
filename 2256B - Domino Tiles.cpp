#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        string s;

        cin >> n >> s;

        int ans = 0;

        // Try all possibilities for s[0] and s[1]
        for (int a = 0; a <= 1; a++) {
            for (int b = 0; b <= 1; b++) {

                string t = s;

                t[0] = char('0' + a);
                t[1] = char('0' + b);

                // s[i+2] must be opposite of s[i]
                for (int i = 0; i + 2 < n; i++) {
                    t[i + 2] = (t[i] == '0' ? '1' : '0');
                }

                bool ok = true;

                // Check against original known characters
                for (int i = 0; i < n; i++) {
                    if (s[i] != '?' && s[i] != t[i]) {
                        ok = false;
                        break;
                    }
                }

                if (ok)
                    ans++;
            }
        }

        cout << ans << '\n';
    }
}
