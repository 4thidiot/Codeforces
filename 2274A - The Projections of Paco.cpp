#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long p = 0;

        for (int i = 1; i <= n; i++) {
            long long x;
            cin >> x;

            if (i % 2)
                p += x;
            else
                p -= x;
        }

        cout << p << '\n';
    }
}