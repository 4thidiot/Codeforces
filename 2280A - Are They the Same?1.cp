#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int ca = 0, cb = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x % 2 == 0) ca++;
        }

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x % 2 == 0) cb++;
        }

        if (k % 2 == 0)
            cout << (ca <= cb ? "YES" : "NO") << '\n';
        else
            cout << (cb <= ca ? "YES" : "NO") << '\n';
    }
}