#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int ans = (s[0] == '1');

        for (int i = 1; i < n; i++) {
            if (s[i] != s[i - 1]) ans++;
        }

        cout << ans << '\n';
    }
}
