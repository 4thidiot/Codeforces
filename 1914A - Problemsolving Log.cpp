#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int ans = 0;
        for (int i = 0; i < 26; i++) {
            if (count(s.begin(), s.end(), char('A' + i)) >= i + 1)
                ans++;
        }

        cout << ans << '\n';
    }
}