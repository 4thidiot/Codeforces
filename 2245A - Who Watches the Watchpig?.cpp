#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        if (2 * k > n) {
            cout << -1 << '\n';
            continue;
        }

        int ans = 0;

        for (int i = 0; i < k; i++) {
            ans += (s[i] != 'R') + (s[n - i - 1] != 'L');
        }

        cout << ans << '\n';
    }

    return 0;
}