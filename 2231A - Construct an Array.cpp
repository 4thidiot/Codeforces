#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (n == 1) {
            cout << 1 << '\n';
            continue;
        }

        cout << 2 * n << ' ' << 1 << ' ' << 2 * n - 1;

        for (int i = 2; i <= n - 2; i++)
            cout << ' ' << i;

        cout << '\n';
    }

    return 0;
}