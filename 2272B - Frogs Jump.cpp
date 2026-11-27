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

        string a, b;
        cin >> a >> b;

        int cnt = 0;

        for (char c : a)
            cnt += (c == 'f');

        for (char c : b)
            cnt += (c == 'f');

        cout << cnt % 2 << '\n';
    }

    return 0;
}