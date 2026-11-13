#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int tc = 0; tc < t; tc++) {
        int n;
        string s;
        cin >> n >> s;
        s = "B" + s;
        int ans = 0;
        for (int i = 1; i <= n; i++)
            ans += s[i] == s[i - 1];
        cout << ans << endl;
    }
}
