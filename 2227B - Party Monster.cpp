#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int open = 0;
        for (char c : s)
            if (c == '(')
                open++;

        cout << (open * 2 == n ? "YES" : "NO") << '\n';
    }

    return 0;
}