#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int a0 = 0, b0 = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x % 2 == 0) a0++;
        }

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x % 2 == 0) b0++;
        }

        if (k % 2 == 0) {
            cout << (a0 <= b0 ? "YES" : "NO") << '\n';
        } else {
            cout << (b0 <= a0 ? "YES" : "NO") << '\n';
        }
    }

    return 0;
}
